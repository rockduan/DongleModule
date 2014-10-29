#include "DongleModule.h"
DongleModule::DongleModule()
{
    //ctor
    cout<<"DongleModule::DongleModule()"<<endl;
    strcpy(UDISK_DIR,"/mnt/usb");
}

DongleModule::~DongleModule()
{
    //dtor
}

DongleModule::DongleModule(SolutionProviderFactory *factory):solutionProviderFactory(factory)
{
    cout<<"DongleModule::DongleModule(SolutionProviderFactory factory):solutionProviderFactory(factory)"<<endl;
}
int DongleModule::file_exists(const char *filename)
{
	return (access(filename, 0) == 0);
}

int DongleModule::scan_dir(char *dir, int depth)
{

    DIR *dp;
    int result =0;
    struct dirent *entry;
    struct stat statbuf;
    if((dp = opendir(dir)) == NULL)
    {
        //LOGE("can't open dir.\n");
        return result;
    }
    chdir (dir);
    while((entry = readdir(dp)) != NULL)
    {
        lstat(entry->d_name, &statbuf);
        if(S_IFDIR &statbuf.st_mode)
        {
            if (strcmp(".", entry->d_name) == 0 || strcmp("..", entry->d_name) == 0)
              continue;
			//LOGI("%*s%s/\n", depth, "", entry->d_name);
			sprintf(FILE_PATH, "%s/%s/%s", "/mnt/usb",entry->d_name,"dongle_update.bin");
			if (file_exists(FILE_PATH)) {
				//LOGE("find the bin in udisk success,this path:%s \n",FILE_PATH);
				result =1;
				break;
    		}else{
    			//LOGE("can't find the bin in udisk success,this path:%s \n",FILE_PATH);
				continue;
			}
        }
        else
        {
             //LOGI("%*s%s\n", depth, "", entry->d_name);
        }

    }
    chdir("..");
    closedir(dp);
    return result;
}

void DongleModule::my_progress_callback(int stage, int max, int current) {

	SAVE_CURSOR();
	MOVETO(1, 1);
	CLEAR_END();
	MOVETO(1, 10);

	switch (stage) {
		case APROM_PROGRAM_STAGE_START:
			//LOGI("APROM PROGRAM START...");
			break;
		case APROM_PROGRAM_ERASING:
			//LOGI("APROM PROGRAM ERASING...");
			break;
		case APROM_PROGRAM_WRITING:
			//LOGI("APROM PROGRAM WRITING...");
			break;
		case APROM_PROGRAM_VERIFYING:
			//LOGI("APROM PROGRAM VERIFYING...");
			break;
		case APROM_PROGRAM_STAGE_END:
			//LOGI("APROM PROGRAM STAGE END");
			break;
		case APROM_DATA_STAGE_START:
			//LOGI("APROM Data STAGE_START...");
			break;
		case APROM_DATA_ERASING:
			//LOGI("APROM Data ERASING...");
			break;
		case APROM_DATA_WRITING:
			//LOGI("APROM Data WRITING...");
			break;
		case APROM_DATA_VERIFYING:
			//LOGI("APROM Data VERIFYING...");
			break;
		case APROM_DATA_STAGE_END:
			//LOGI("APROM Data STAGE END...");
			break;
	}

	if (max != 0) {
		//LOGI("%d%%\n", current);
	}

	RESTORE_CURSOR();
}

int DongleModule::findUpdateBinFromUDisk(){
	int result =0;
	if(scan_dir(UDISK_DIR, 0)){
		result =1;
	}else{
		//LOGE("can't find the bin in udisk\n");
	}
	return result;
}
void DongleModule::BurnDongle(int providerId)
{
    cout<<"DongleModule::BurnDongle();..这里是我们调用方案商接口对我们想实现的行为的实现，\n相当于BurnDongle.cpp的main函数"<<endl;
    //在这里利用工厂来初始化方案商这个对象
    solutionProvider = solutionProviderFactory->CreateSolutionProvider(providerId);
	CLEAR();
	DONGLE_INFO dongleInfo;
	DONGLE_INFO* pDongleInfo = &dongleInfo;
	int selected = -1;
	int result =-1;
	int result_fd = -1;
	char buffer[2]={0,0};
	//const char * filename=0;
main_menu:
	cout<<"====================================\n"<<endl;
	cout<<"main_menu begin..."<<endl;
	solutionProvider->burnDongle();
	//int count = ScanForDongle();
	int count = solutionProvider->scanDongle();
	for (int i=0; i<count; ++i) {
		DONGLE_INFO dongleInfo = {0};
		//if (!GetDongleInfo(i, &dongleInfo)) continue;
		//这里有问题，如果没有获取成功的话，会进入死循环
		if(!solutionProvider->getDongleInfo()) continue;
	}
	selected = 0;
	//if (!GetDongleInfo(selected, pDongleInfo)) {
	if(solutionProvider->getDongleInfo()){
		//LOGE("Get Dongle Info falied!\n");
		result = NO_DONGLE_PLUG_IN ;
		goto main_finish;
	}

	if(!findUpdateBinFromUDisk()){
		//LOGE("Can't find the update_bin from udisk!\n");
		result = FAIL_FIND_BIN_IN_UDISK;
		goto main_finish;
	}

	if(pDongleInfo->mode == DONGLE_MODE_ISP){
		//LOGI("goto burn dongle right now!\n");
		goto burn_dongle;
	}else{
		//if(!SetDongleToIspMode(pDongleInfo->dongleID)) {
		if(!solutionProvider->setDongleMode(1)){
			//LOGE("failed to set dongle to isp mode!\n");
			result = FAIL_SET_DONGLE_ISP_MODE;
			goto main_finish;
		}else{
			//LOGI("success to set dongle to isp mode!\n");
			goto main_menu;
		}
	}

burn_dongle:
	//LOGI("file path = %s\n",FILE_PATH);
	if(solutionProvider->burnDongle()){
	//if(!BurnDongle(dongleID, filename, NULL, true, my_progress_callback)){
		//LOGI("success to burn dongle!\n");
		//if(!SetDongleToNormalMode(pDongleInfo->dongleID)){
		if(solutionProvider->setDongleMode(2)){
			//LOGE("failed to set dongle to normal mode!\n");
			result = FAIL_SET_DONGLE_NORMAL_MODE;
			goto main_finish;
		}else{
			//LOGI("success to set dongle to normal mode!\n");
			result = SUCCESS_BURN_DONGLE;
		}
	}else{
		result = FAIL_BURN_DONGLE;
		goto main_finish;
	}

main_finish:
	result_fd=open("/data/dongle_update_flag.ini",O_RDWR|O_TRUNC|O_CREAT,0666);
	if(result_fd == -1){
		//LOGE("can't open /data/dongle_update_flag.ini!\n");
	}else{
		if(result==-1){
			buffer[0] = '0';
		}else{
			buffer[0]=char(result)+'0';
		}
		if(write(result_fd,buffer,sizeof(buffer))!=1){
			//LOGI("write /data/dongle_update_flag.ini success!\n");
		}
		else{
			//LOGI("can't write /data/dongle_update_flag.ini!\n");
		}
		close(result_fd);
	}
}
