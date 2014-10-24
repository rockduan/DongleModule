#include "SolutionProvider.h"

SolutionProvider::SolutionProvider()
{
    cout<<"SolutionProvider::SolutionProvider()"<<endl;
    //ctor
    //iScanDongle = new IScanDongle();
}

SolutionProvider::~SolutionProvider()
{
    //dtor
}
/*
SolutionProvider::SolutionProvider(IScanDongle *i_ScanDongle)
{
    cout<<"SolutionProvider::SolutionProvider(IScanDongle i_ScanDongle)"<<endl;
    i_ScanDongle->ScanDongle();
    iScanDongle = i_ScanDongle;
}
*/
void SolutionProvider::ScanDongle()
{
    cout<<"SolutionProvider::ScanDongle()"<<endl;
    //iScanDongle.ScanDongle();
}
