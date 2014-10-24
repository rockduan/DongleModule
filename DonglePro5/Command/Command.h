#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
using namespace std;

class Command
{
    public:
        /** Default constructor */
        Command();
        /** Default destructor */
        virtual ~Command();
        virtual bool execute() = 0;
    protected:
    private:
};

#endif // COMMAND_H
