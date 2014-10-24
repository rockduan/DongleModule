#ifndef ISCANDONGLE_H
#define ISCANDONGLE_H

#include <iostream>
using namespace std;

class IScanDongle
{
    public:
        /** Default constructor */
        IScanDongle();
        /** Default destructor */
        virtual ~IScanDongle();
        //将接口申明为纯虚函数，接口为纯虚类，以便具体方法继承此此接口来实现具体的行为
        virtual void ScanDongle() = 0;
    protected:
    private:
};

#endif // ISCANDONGLE_H
