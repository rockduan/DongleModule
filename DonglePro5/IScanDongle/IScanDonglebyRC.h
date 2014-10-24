#ifndef ISCANDONGLEBYRC_H
#define ISCANDONGLEBYRC_H

#include "IScanDongle.h"


class IScanDonglebyRC : public IScanDongle
{
    public:
        /** Default constructor */
        IScanDonglebyRC();
        /** Default destructor */
        virtual ~IScanDonglebyRC();
        void ScanDongle();
    protected:
    private:
};

#endif // ISCANDONGLEBYRC_H
