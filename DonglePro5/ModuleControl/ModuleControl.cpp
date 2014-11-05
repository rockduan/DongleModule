#include "ModuleControl.h"

ModuleControl::ModuleControl()
{
    //ctor
    cout<<"ModuleControl::ModuleControl()"<<endl;
}

ModuleControl::~ModuleControl()
{
    //dtor
}

void ModuleControl::SendCommand(Command *cmd)
{
    cout<<"ModuleControl::SendCommand(Command cmd)..."<<endl;
    command = cmd;
    command->execute();
}
