#ifndef _ISP_FUNCS_H_
#define _ISP_FUNCS_H_

#if __GNUC__ >= 4 && defined(BUILD_SHARED_LIB)
      #define DLL_PUBLIC __attribute__ ((visibility("default")))
      #define DLL_LOCAL  __attribute__ ((visibility("hidden")))
    #else
      #define DLL_PUBLIC
      #define DLL_LOCAL
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define DONGLE_MODE_ISP 0
#define DONGLE_MODE_NORMAL 1
#define VERSION_LEN 256
typedef struct _tagDongleInfo {
	int dongleID;		 // dongle id
	unsigned short vendorID; // vendor id
	unsigned short productID;// product id
	int mode;		 // dongle mode(DONGLE_MODE_ISP, DONGLE_MODE_NORMAL)	
	char version[VERSION_LEN]; // 版本信息 
}DONGLE_INFO, *PDONGLE_INFO;

// 进度回调函数
#define APROM_PROGRAM_STAGE_START	0x00000000	// APROM 程序进度开始
#define APROM_PROGRAM_ERASING 		0x00000010	// APROM 程序正在清除
#define APROM_PROGRAM_WRITING 		0x00000020	// APROM 程序正在烧写
#define APROM_PROGRAM_VERIFYING 	0x00000030	// APROM 程序正在校验
#define APROM_PROGRAM_STAGE_END		0x000000F0	// APROM 程序进度结束

#define APROM_DATA_STAGE_START		0x00000001	// APROM data 进度开始
#define APROM_DATA_ERASING 		0x00000011	// APROM data 正在清除 
#define APROM_DATA_WRITING 		0x00000021	// APROM data 正在烧写
#define APROM_DATA_VERIFYING 		0x00000031 	// APROM data 正在校验
#define APROM_DATA_STAGE_END		0x000000F1	// APROM data 进度结束
typedef void (*PROGRESS_CALLBACK)(int stage, int max, int current);

// 扫描当前平台上已经插入的dongle，返回已经插入的dongle的数量
int DLL_PUBLIC ScanForDongle();

// 获取指定dongle的信息
bool DLL_PUBLIC GetDongleInfo(int index, DONGLE_INFO* pDongleInfo);

// 把dongle设置为isp模式 
bool DLL_PUBLIC SetDongleToIspMode(int dongleID);

// 把dongle设置为normal模式
bool DLL_PUBLIC SetDongleToNormalMode(int dongleID);

// 初始化dongle，dongle必须处于isp状态
bool DLL_PUBLIC InitializeDongle(int dongleID);

// 将将bin档烧写到dongle, dongle 必须处于isp状态
// pszBinFileName : bin档的全路径名,如果不烧写bin档，则设为NULL
// pszDataFlashFileName : data flash 档的全路径名,如果不烧写data flash，则设为NULL
// bVerify : 烧写完后是否校验
// callback : 烧写进度的回调函数
bool DLL_PUBLIC BurnDongle(int dongleID, const char* pszBinFileName, const char* pszDataFlashFileName, 
		bool bVerify, PROGRESS_CALLBACK callback);

#ifdef __cplusplus
}
#endif

#endif
