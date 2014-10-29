#ifndef SOLUTIONPROVIDERA_H
#define SOLUTIONPROVIDERA_H
#include "SolutionProvider.h"
#include "ScanDonglebyBluetooth.h"
#include "BurnDongle.h"
#include <iostream>
using namespace std;
class SolutionProviderA : public SolutionProvider
{
    public:
        /** Default constructor */
        SolutionProviderA();
        /** Default destructor */
        virtual ~SolutionProviderA();
        bool scanDongle();
        bool burnDongle();
        bool getDongleInfo();
        bool setDongleMode(int mode);
       protected:
    private:
};

#endif // SOLUTIONPROVIDERA_H
