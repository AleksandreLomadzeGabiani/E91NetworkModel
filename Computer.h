#ifndef COMPUTER_H
#define COMPUTER_H

#include<bits/stdc++.h>
#include "qubit.h"

class Computer
{
    public:
        Computer();
        Computer(std::string n,int bitnum);

        std::string getname();
        std::vector<int> getKey();
        std::vector<int> sendKey(Computer b);
    protected:

    private:
        std::string name;
        std::vector<qubit> bits;
        std::vector<std::pair<std::vector<int> ,Computer> > Keychain;
};

#endif // COMPUTER_H
