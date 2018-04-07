#include "Computer.h"
#include "EntangledCubitBlock.h"
#include "qubit.h"
#include "OTP.h"

Computer::Computer()
{
    name="NULL";
}

Computer::Computer(std::string n,int bitnum){
    name=n;
    qubitBlock=*new EntangledCubitBlock(bitnum);
}

std::string Computer::getname(){
    return name;
}

EntangledCubitBlock Computer::getBlock(){
    return Computer::qubitBlock;
}

void Computer::setRecievedFrom(std::string s){
    Computer::recievedFrom=s;
}

bool Computer::getPinged(){
    Computer::nextOperationKey=Computer::getBlock().getCurrentState();  // REMEMBER THE KEY THAT IS SEND FOR NEXT OPERATION
    return true; // CONFIRM THAT YOU RECIEVED THE PING
}

void Computer::recievemsg(std::vector<int> msg,std::string SENDER){
    setRecievedFrom(SENDER);
    std::vector<int> a=OTPdecryptdata(msg,Computer::nextOperationKey);
    transferedKey=a;
}

std::vector<int> Computer::getKey(){
    return transferedKey;
}

std::vector<int> Computer::sendKey(Computer b){
    if(b.getPinged()){
        std::vector<int> o =Computer::getBlock().getKey();
        Computer::getBlock().getKey();
        b.recievemsg(OTPencryptdata(Computer::getBlock().getCurrentState(),o),getname());
    }
    return getBlock().getCurrentState();
}
