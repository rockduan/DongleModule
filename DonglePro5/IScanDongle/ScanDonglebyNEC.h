#ifndef SCANDONGLEBYNEC_H
#define SCANDONGLEBYNEC_H

#include "IScanDongle.h"


class ScanDonglebyNEC : public IScanDongle
{
    public:
        /** Default constructor */
        ScanDonglebyNEC();
        /** Default destructor */
        virtual ~ScanDonglebyNEC();
        bool scanDongle();
    protected:
    private:
};

#endif // SCANDONGLEBYNEC_H
