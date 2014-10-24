#include "Command.h"

Command::Command()
{
    //ctor
}

Command::~Command()
{
    //dtor
}
bool Command::execute()
{
    cout<<"Command::execute() executing..."<<endl;
    return false;
}
