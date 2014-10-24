#ifndef SOLUTIONPROVIDERA_H
#define SOLUTIONPROVIDERA_H
#include "SolutionProvider.h"
#include "ScanDonglebyBluetooth.h"
#include <iostream>
using namespace std;
class SolutionProviderA : public SolutionProvider
{
    public:
        /** Default constructor */
        SolutionProviderA();
        /** Default destructor */
        virtual ~SolutionProviderA();
        void ScanDongle();
       protected:
    private:
};

#endif // SOLUTIONPROVIDERA_H
