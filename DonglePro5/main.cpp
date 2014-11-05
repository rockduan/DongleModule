#include <iostream>
#include "SolutionProviderFactory.h"
#include "DongleModule.h"
#include "ModuleControl.h"
#include "DongleModuleCommand.h"
using namespace std;

int main()
{
    cout << "test  begin.." << endl;
    ModuleControl *moduleControl = new ModuleControl();

    //先创建一个方案商工厂，专门用来创建方案商
    SolutionProviderFactory *factory = new SolutionProviderFactory();
    DongleModule *dongleModule = new DongleModule(factory);
    DongleModuleCommand dongleModuleCommand(*dongleModule);
    moduleControl->SendCommand(&dongleModuleCommand);
    //先创建一个方案商工厂，专门用来创建方案商
    //SolutionProviderFactory *factory = new SolutionProviderFactory();
    //创建一个Dongle模块对象，这个Dongle模块对象内部有一个工厂句柄，在这里将工厂传入
    //DongleModule dongleModule(factory);
    //之后因为工厂已经传入，这个时候，就可以利用工厂来创建方案商，并执行方案商的函数了
    //dongleModule.BurnDongle(1);
    cout << "test  end..." << endl;
    return 0;
}
