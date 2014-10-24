#include "DongleModuleCommand.h"

DongleModuleCommand::DongleModuleCommand()
{
    //ctor
}

DongleModuleCommand::~DongleModuleCommand()
{
    //dtor
}
DongleModuleCommand::DongleModuleCommand(DongleModule donglemodule):dongleModule(donglemodule)
{
    //ctor
    cout<<"DongleModuleCommand::DongleModuleCommand(DongleModule donglemodule):dongleModule(donglemodule)"<<endl;
}

bool DongleModuleCommand::execute()
{
    //在这里确定传递的方案商参数是否合适？
    cout<<"DongleModuleCommand::execute() excuting!!!!!!!!!!!!"<<endl;
    dongleModule.BurnDongle(1);
    return true;
}
