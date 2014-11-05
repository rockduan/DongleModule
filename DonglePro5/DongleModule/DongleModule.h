#ifndef DONGLEMODULE_H
#define DONGLEMODULE_H
#include "SolutionProviderFactory.h"
#include "SolutionProvider.h"
#include "dongle.h"
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
class DongleModule
{
    public:
        /** Default constructor */
        DongleModule();
        //模块里有一个工厂句柄，是对工厂对象的一个引用
        SolutionProviderFactory *solutionProviderFactory;
        SolutionProvider *solutionProvider;
        //在构造函数中对工厂进行初始化
        DongleModule(SolutionProviderFactory *factory);
        /** Default destructor */
        virtual ~DongleModule();
        void BurnDongle(int providerId);
        char FILE_PATH[255];
        char UDISK_DIR[15];
        int findUpdateBinFromUDisk();
        void my_progress_callback(int stage, int max, int current);
        //int burnDongleFromUdisk(const char* filename,int dongleID);
        int scan_dir(char *dir, int depth);
        int file_exists(const char *filename);
    protected:
    private:


};

#endif // DONGLEMODULE_H
