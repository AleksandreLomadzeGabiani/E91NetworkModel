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
        void setRecievedFrom(std::string s);
        std::vector<int> getKey();
        std::vector<int> sendKey(Computer b);
        EntangledCubitBlock getBlock();
        //MAKESHIFT SERVER
        bool getPinged();
        void recievemsg(std::vector<int> msg,std::string SENDER);
        //MAKESHIFT SERVER

    protected:

    private:
        std::string name;
        EntangledCubitBlock qubitBlock;
        std::vector<int> transferedKey;
        std::string recievedFrom;
        std::vector<int> nextOperationKey;

};

#endif // COMPUTER_H
