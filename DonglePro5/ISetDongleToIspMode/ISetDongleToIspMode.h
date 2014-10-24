#ifndef ISETDONGLETOISPMODE_H
#define ISETDONGLETOISPMODE_H
#include <iostream>
using namespace std;

class ISetDongleToIspMode
{
    public:
        /** Default constructor */
        ISetDongleToIspMode();
        /** Default destructor */
        virtual ~ISetDongleToIspMode();
          //将接口函数定义为纯虚函数，让方案商必须实现此接口，起到强制实现的作用
        virtual void SetDongleToIspMode() = 0;
    protected:
    private:
};

#endif // ISETDONGLETOISPMODE_H
