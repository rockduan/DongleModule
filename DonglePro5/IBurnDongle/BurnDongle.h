#ifndef BURNDONGLE_H
#define BURNDONGLE_H
#include "IBurnDongle.h"

class BurnDongle : public IBurnDongle
{
    public:
        BurnDongle();
        virtual ~BurnDongle();
        bool burnDongle();
    protected:
    private:
};

#endif // BURNDONGLE_H
