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
    Computer::temp=getBlock().getKey();
}

std::vector<int> Computer::getTemp(){
    return temp;
}

void Computer::recieveInfo(std::string sender,std::vector<int> info){
    Computer::key.second=sender;
    Computer::key.first=OTPdecryptdata(info,temp);
}

void Computer::sendKey(Server s,Computer b){
    key.second=b.getID();
    key.first=getBlock().getKey();
    temp=key.first;
    s.recieverequest(ID,b.getID());
}

 std::pair<std::vector<int>,std::string> Computer::getkey(){
    return key;
 }
