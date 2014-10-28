#ifndef IBURNDONGLE_H
#define IBURNDONGLE_H
#include <iostream>
using namespace std;

class IBurnDongle
{
    public:
        IBurnDongle();
        virtual ~IBurnDongle();
        virtual bool burnDongle() = 0;
    protected:
    private:
};

#endif // IBURNDONGLE_H
