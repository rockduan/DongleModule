#ifndef GETDONGLEINFO_H
#define GETDONGLEINFO_H

#include "IGetDongleInfo.h"


class GetDongleInfo : public IGetDongleInfo
{
    public:
        GetDongleInfo();
        virtual ~GetDongleInfo();
        bool getDongleInfo();
    protected:
    private:
};

#endif // GETDONGLEINFO_H
