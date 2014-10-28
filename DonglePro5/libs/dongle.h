#ifndef _DONGLE_H_
#define _DONGLE_H_

#include <stdio.h>
#include "IspFuncs.h"
#include <unistd.h>
//#include <android/log.h>
#include <fcntl.h>


#ifdef __cplusplus
extern "C" {
#endif

#define CLEAR() printf("\033[2J")
#define CLEAR_END() printf("\033[K")
#define MOVETO(x,y) printf("\033[%d;%dH", (x), (y))
#define RESET_CURSOR() printf("\033[H")
#define SAVE_CURSOR() printf("\033[s")
#define RESTORE_CURSOR() printf("\033[u")

#define LOG_TAG "TCL_RC_DONGLE"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)
#define  LOGW(...)  __android_log_print(ANDROID_LOG_WARN,LOG_TAG,__VA_ARGS__)


#define NO_DONGLE_PLUG_IN 0x1
#define FAIL_FIND_BIN_IN_UDISK 0x2
#define FAIL_SET_DONGLE_ISP_MODE 0x3
#define SUCCESS_BURN_DONGLE 0x4
#define FAIL_BURN_DONGLE 0x5
#define SUCCESS_INIT_DONGLE 0x6
#define FAIL_INIT_DONGLE 0x7
#define SUCCESS_GET_VERSION 0x8
#define FAIL_SET_DONGLE_NORMAL_MODE 0x9


void my_progress_callback(int stage, int max, int current);

int burnDongleFromUdisk(const char* filename,int dongleID);

int findUpdateBinFromUDisk();

#ifdef __cplusplus
}
#endif

#endif
