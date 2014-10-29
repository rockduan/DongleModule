#ifndef SETDONGLETONORMALMODE_H
#define SETDONGLETONORMALMODE_H

#include "ISetDongleMode.h"


class SetDongleToNormalMode : public ISetDongleMode
{
    public:
        SetDongleToNormalMode();
        virtual ~SetDongleToNormalMode();
        bool setDongleMode(int mode);
    protected:
    private:
};

#endif // SETDONGLETONORMALMODE_H
