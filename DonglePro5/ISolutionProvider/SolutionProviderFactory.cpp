#include "SolutionProviderFactory.h"
#include "SolutionProvider.h"
SolutionProviderFactory::SolutionProviderFactory()
{
    //ctor
    cout<<"SolutionProviderFactory::SolutionProviderFactory()"<<endl;
}

SolutionProviderFactory::~SolutionProviderFactory()
{
    //dtor
}
//工厂根据传入的id参数来创建相应的对象
SolutionProvider* SolutionProviderFactory::CreateSolutionProvider(int providerId)
{
    if(providerId == 1)
    {
        cout<< "new a SolutionProvider A in SolutionProviderFactoryA" <<endl;
        solutionProvider= new SolutionProviderA();
    }else if(providerId == 2)
    {
        cout<< "new a SolutionProvider B in SolutionProviderFactoryB" <<endl;
    }
    return solutionProvider;
}
