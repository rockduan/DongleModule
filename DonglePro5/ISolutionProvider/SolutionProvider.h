#ifndef INTERFACE_H
#define INTERFACE_H
#include "IScanDongle.h"
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
        //用大的表示一类行为的方法来取代具体的行为，这也是便于运行时确定具体行为
        virtual void ScanDongle() = 0;
        //virtual void SetDongleToIspMode();
        //virtual void SetDongleToNomalMode();
    protected:
    private:
};

#endif // INTERFACE_H
