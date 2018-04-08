#ifndef COMPUTER_H
#define COMPUTER_H

#include<bits/stdc++.h>
#include "qubit.h"
#include "EntangledQubitBlock.h"

class Computer
{
    public:
        Computer();
        Computer(std::string n,int bitnum);
        Computer(std::string n,EntangledQubitBlock z);
    protected:

    private:
        std::string ID;
        EntangledQubitBlock qubitBlock;


};

#endif // COMPUTER_H
