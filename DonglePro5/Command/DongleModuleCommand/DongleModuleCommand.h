#ifndef DONGLEMODULECOMMAND_H
#define DONGLEMODULECOMMAND_H
#include "Command.h"
#include "DongleModule.h"
class DongleModuleCommand:public Command
{
    public:
        /** Default constructor */
        DongleModuleCommand();
        /** Default destructor */
        virtual ~DongleModuleCommand();
        DongleModule dongleModule;
        DongleModuleCommand(DongleModule donglemodule);
        bool execute();
    protected:
    private:
};

#endif // DONGLEMODULECOMMAND_H
