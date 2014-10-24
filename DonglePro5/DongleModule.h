#ifndef DONGLEMODULE_H
#define DONGLEMODULE_H
#include "SolutionProviderFactory.h"
#include "SolutionProvider.h"
class DongleModule
{
    public:
        /** Default constructor */
        DongleModule();
        //模块里有一个工厂句柄，是对工厂对象的一个引用
        SolutionProviderFactory *solutionProviderFactory;
        SolutionProvider *solutionProvider;
        //在构造函数中对工厂进行初始化
        DongleModule(SolutionProviderFactory *factory);
        /** Default destructor */
        virtual ~DongleModule();
        void BurnDongle(int providerId);
    protected:
    private:
};

#endif // DONGLEMODULE_H
