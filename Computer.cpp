#include <bits/stdc++.h>

#include "EntangledQubitBlock.h"
#include "Computer.h"
#include "Server.h"
#include "qubit.h"
#include "OTP.h"

//Constructors
Computer::Computer(){
    ID="NULL";
}
Computer::Computer(std::string n,int bitnum){
    ID=n;
    qubitBlock=*new EntangledQubitBlock(bitnum);
}
Computer::Computer(std::string n,EntangledQubitBlock z){
    ID=n;
    qubitBlock=z;
}

//Accessors
std::string Computer::getID(){
    return Computer::ID;
}

EntangledQubitBlock Computer::getBlock(){
    return Computer::qubitBlock;
}

//MUTATORS
void Computer::recievePing(){
    Computer::temp=Computer::qubitBlock.getCurrentState();
}

void Computer::recieveInfo(int queryType,std::string sender,std::vector<int> info){
    key.second=sender;
    if(queryType==1){
        Computer::key.first=OTPdecryptdata(info,temp);
    }else if(queryType==0){
        for(int i=0;i<(int)info.size();i++){
            if(info.at(i)==-1){
                key.first.erase(key.first.begin() + i);;
                info.erase(info.begin() + i);
                i--;
            }
        }
    }
}
