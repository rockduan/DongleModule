#include "SolutionProviderA.h"


SolutionProviderA::SolutionProviderA()
{
    cout<<"SolutionProviderA::SolutionProviderA()"<<endl;

    //ctor
    //不能直接： iScanDongle = new IScanDongle();因为没有拷贝构造函数
    //iScanDongle = new ScanDonglebyBlutooth();
}
/*
SolutionProviderA::SolutionProviderA(IScanDongle *i_ScanDongle)
{
    cout<<"SolutionProviderA::SolutionProviderA(IScanDongle i_ScanDongle)"<<endl;
    //i_ScanDongle->ScanDongle();
    //ctor
    //不能直接： iScanDongle = new IScanDongle();因为没有拷贝构造函数
    //用参数列表之后，派生类这里就不需要再写代码初始化基类继承而来的成员对象了
    //iScanDongle = i_ScanDongle;
    iScanDongle = new ScanDonglebyBluetooth();
    iScanDongle->ScanDongle();
}
*/
SolutionProviderA::~SolutionProviderA()
{
    //dtor
}
bool SolutionProviderA::scanDongle()
{
    cout<<"SolutionProviderA::scanDongle()"<<endl;
    //类中有一个接口的实例变量IScanDongle和一个接口的行为函数void ScanDongle()，
    //在接口行为函数ScanDongle的具体实现中(.cpp文件)才将接口的实例变量实例化，
    //达到运行时指定具体行为的目的
    iScanDongle = new ScanDonglebyBluetooth();
    iScanDongle->scanDongle();
}
bool SolutionProviderA::burnDongle()
{
    iBurnDongle = new BurnDongle();
    iBurnDongle->burnDongle();
}
bool SolutionProviderA::getDongleInfo()
{
     cout<<"SolutionProviderA::getDongleInfo()"<<endl;
}
bool SolutionProviderA::setDongleMode(int mode)
{
    cout<<"SolutionProviderA::setDongleMode()"<<endl;
}
