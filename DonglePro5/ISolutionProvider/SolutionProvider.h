#ifndef INTERFACE_H
#define INTERFACE_H
#include "IScanDongle.h"
#include "IBurnDongle.h"
#include "IGetDongleInfo.h"
#include "ISetDongleMode.h"
#include <iostream>
using namespace std;

class SolutionProvider
{
    public:
        /** Default constructor */
        SolutionProvider();
        /** Default destructor */
        virtual ~SolutionProvider();
        // 加入实例变量以在运行时引用正确的行为类型
        IScanDongle *iScanDongle;
        IBurnDongle *iBurnDongle;
        IGetDongleInfo *iGetDongleInfo;
        ISetDongleMode *iSetDongleMode;
        //用大的表示一类行为的方法来取代具体的行为，这也是便于运行时确定具体行为
        virtual bool scanDongle() = 0;
        virtual bool burnDongle() = 0;
        virtual bool getDongleInfo() = 0;
        virtual bool setDongleMode(int mode) = 0;
        //virtual void SetDongleToIspMode();
        //virtual void SetDongleToNomalMode();
    protected:
    private:
};

#endif // INTERFACE_H
