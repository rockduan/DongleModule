#ifndef SCANDONGLEBYBLUTOOTH_H
#define SCANDONGLEBYBLUTOOTH_H

#include "IScanDongle.h"


class ScanDonglebyBlutooth : public IScanDongle
{
    public:
        /** Default constructor */
        ScanDonglebyBlutooth();
        /** Default destructor */
        virtual ~ScanDonglebyBlutooth();
        void ScanDongle();
    protected:
    private:
};

#endif // SCANDONGLEBYBLUTOOTH_H
