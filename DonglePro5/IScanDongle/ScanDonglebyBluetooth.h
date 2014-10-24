#ifndef SCANDONGLEBYBLUETOOTH_H
#define SCANDONGLEBYBLUETOOTH_H

#include "IScanDongle.h"
class ScanDonglebyBluetooth : public IScanDongle
{
    public:
        /** Default constructor */
        ScanDonglebyBluetooth();
        /** Default destructor */
        virtual ~ScanDonglebyBluetooth();
        void ScanDongle();
    protected:
    private:
};

#endif // SCANDONGLEBYBLUETOOTH_H
