#ifndef SETDONGLETOISPMODE_H
#define SETDONGLETOISPMODE_H

#include "ISetDongleMode.h"


class SetDongleToIspMode : public ISetDongleMode
{
    public:
        SetDongleToIspMode();
        virtual ~SetDongleToIspMode();
        bool setDongleMode(int mode);
    protected:
    private:
};

#endif // SETDONGLETOISPMODE_H
