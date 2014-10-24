#ifndef SOLUTIONPROVIDERFACTORY_H
#define SOLUTIONPROVIDERFACTORY_H
#include "SolutionProvider.h"
#include "SolutionProviderA.h"
class SolutionProviderFactory
{
    public:
        /** Default constructor */
        SolutionProviderFactory();
        /** Default destructor */
        virtual ~SolutionProviderFactory();
        //工厂中有一个对象句柄
        SolutionProvider *solutionProvider;
        //有一个方法用来创建对象
        SolutionProvider* CreateSolutionProvider(int providerId);
    protected:
    private:
};

#endif // SOLUTIONPROVIDERFACTORY_H
