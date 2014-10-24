#include "DongleModule.h"

DongleModule::DongleModule()
{
    //ctor
    cout<<"DongleModule::DongleModule()"<<endl;
}

DongleModule::~DongleModule()
{
    //dtor
}

DongleModule::DongleModule(SolutionProviderFactory *factory):solutionProviderFactory(factory)
{
    cout<<"DongleModule::DongleModule(SolutionProviderFactory factory):solutionProviderFactory(factory)"<<endl;
}

void DongleModule::BurnDongle(int providerId)
{
    cout<<"DongleModule::BurnDongle();.."<<endl;
    //在这里利用工厂来初始化方案商这个对象
    solutionProvider = solutionProviderFactory->CreateSolutionProvider(providerId);
    solutionProvider->ScanDongle();
    //solutionProvider->GetDongleInfo();
    //solutionProvider->SetDongleToIspMode();
}
