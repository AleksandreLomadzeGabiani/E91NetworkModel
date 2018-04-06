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
        void sendKey(Computer b);
    protected:

    private:
        std::string name;
        std::vector<qubit> bits;
        std::vector<std::pair<int,Computer> > Keychain;
};

#endif // COMPUTER_H
