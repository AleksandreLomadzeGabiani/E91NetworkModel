#ifndef COMPUTER_H
#define COMPUTER_H

#include<bits/stdc++.h>
#include "qubit.h"
#include "EntangledCubitBlock.h"

class Computer
{
    public:
        Computer();
        Computer(std::string n,int bitnum);

        std::string getname();
        std::vector<int> getKey();
        std::vector<int> sendKey(Computer b);
        EntangledCubitBlock getBlock();
    protected:

    private:
        std::string name;
        EntangledCubitBlock qubitBlock;
        std::vector<std::pair<std::vector<int> ,Computer> > Keychain;

};

#endif // COMPUTER_H
