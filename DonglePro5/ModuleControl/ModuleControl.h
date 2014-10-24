#ifndef MODULECONTROL_H
#define MODULECONTROL_H
#include "Command.h"
class ModuleControl
{
    public:
        /** Default constructor */
        ModuleControl();
        /** Default destructor */
        virtual ~ModuleControl();
        Command *command;
        void SendCommand(Command *cmd);
    protected:
    private:
};

#endif // MODULECONTROL_H
