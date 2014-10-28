#ifndef IGETDONGLEINFO_H
#define IGETDONGLEINFO_H
#include <iostream>
using namespace std;

class IGetDongleInfo
{
    public:
        /** Default constructor */
        IGetDongleInfo();
        /** Default destructor */
        virtual ~IGetDongleInfo();
        virtual bool getDongleInfo()=0;
    protected:
    private:
};

#endif // IGETDONGLEINFO_H
