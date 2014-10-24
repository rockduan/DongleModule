#ifndef SOLUTIONPROVIDERB_H
#define SOLUTIONPROVIDERB_H
#include "SolutionProvider.h"
#include <iostream>
using namespace std;

class SolutionProviderB:public SolutionProvider
{
    public:
        /** Default constructor */
        SolutionProviderB();
        /** Default destructor */
        virtual ~SolutionProviderB();
        void ScanDongle();
        void GetDongleInfo();
        void SetDongleToIspMode();
    protected:
    private:
};

#endif // SOLUTIONPROVIDERB_H
