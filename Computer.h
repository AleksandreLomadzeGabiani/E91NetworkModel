#ifndef COMPUTER_H
#define COMPUTER_H
#include<bits/stdc++.h>
#include "EntangledQubitBlock.h"
#include "qubit.h"

class Server;

class Computer{
    public:
        Computer();
        Computer(std::string n,int bitnum);
        Computer(std::string n,EntangledQubitBlock z);

        //Accessors
        std::string getID();
        EntangledQubitBlock getBlock();
        std::pair<std::vector<int>,std::string> getkey();
        std::vector<int> getTemp();

        //Mutators
        void recieveInfo(std::string sender,std::vector<int> info);
        void recievePing(); //SETS TEMP TO THE QUANTUM BLOCK CURRENT FORM
        void sendKey(Server s,Computer b);
    protected:

    private:
        std::string ID;
        EntangledQubitBlock qubitBlock;
        void recieveInfo(int query,std::vector<int> info);
        std::vector<int> temp;
        std::pair<std::vector<int>,std::string> key;
};

#endif // COMPUTER_H
