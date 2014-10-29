#ifndef ISETDONGLEMODE_H
#define ISETDONGLEMODE_H


class ISetDongleMode
{
    public:
        ISetDongleMode();
        virtual ~ISetDongleMode();
        virtual bool setDongleMode(int mode) = 0;
    protected:
    private:
};

#endif // ISETDONGLEMODE_H
