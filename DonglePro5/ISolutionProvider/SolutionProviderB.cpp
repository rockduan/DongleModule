#include "SolutionProviderB.h"

SolutionProviderB::SolutionProviderB()
{
    //ctor
}

SolutionProviderB::~SolutionProviderB()
{
    //dtor
}
bool SolutionProviderB::scanDongle()
{
    cout<<"SolutionProviderB::scanDongle()"<<endl;
    return true;
}
bool SolutionProviderB::getDongleInfo()
{

    cout<<"SolutionProviderB::getDongleInfo()"<<endl;
	return true;
}
bool SolutionProviderB::setDongleMode(int mode)
{
    cout<<"SolutionProviderB::setDongleMode()"<<endl;
	return true;
}
