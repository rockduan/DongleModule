#ifndef ISETDONGLETONOMALMODE_H
#define ISETDONGLETONOMALMODE_H
#include <iostream>
using namespace std;

class ISetDongleToNomalMode
{
    public:
        /** Default constructor */
        ISetDongleToNomalMode();
        /** Default destructor */
        virtual ~ISetDongleToNomalMode();
         //将接口函数定义为纯虚函数，让方案商必须实现此接口，起到强制实现的作用
        virtual void SetDongleToNomalMode() = 0;
    protected:
    private:
};

#endif // ISETDONGLETONOMALMODE_H
