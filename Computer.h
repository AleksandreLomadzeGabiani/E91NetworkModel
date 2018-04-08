#ifndef COMPUTER_H
#define COMPUTER_H

#include<bits/stdc++.h>

#include "EntangledQubitBlock.h"
#include "Server.h"
#include "qubit.h"

class Computer{
    public:
        Computer();
        Computer(std::string n,int bitnum);
        Computer(std::string n,EntangledQubitBlock z);

        //Accessors
        std::string getID();
        EntangledQubitBlock getBlock();
        std::vector<int> getkey();

        //Mutators
        void recieveInfo(int query,std::string sender,std::vector<int> info);
        void recievePing(); //SETS TEMP TO THE QUANTUM BLOCK CURRENT FORM
    protected:

    private:
        std::string ID;
        EntangledQubitBlock qubitBlock;
        void recieveInfo(int query,std::vector<int> info);
        std::vector<int> temp;
        std::pair<std::vector<int>,std::string> key;
};

#endif // COMPUTER_H
