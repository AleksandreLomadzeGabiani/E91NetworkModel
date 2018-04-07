#include "Computer.h"
#include "qubit.h"

Computer::Computer()
{
    name="NULL";
}

Computer::Computer(std::string n,int bitnum){
    name=n;
    for(int i=0;i<bitnum;i++){
        Computer::bits.push_back(*new qubit());
    }
}
std::string Computer::getname(){
    return name;
}

std::vector<int> Computer::getKey(){
    int bit=0;
    std::vector<int> key;
    for(int i=0;i<(int)Computer::bits.size();i++){
        bit=bits.at(i).getValue();
        key.push_back(bit);
    }
    return key;
}

std::vector<int> Computer::sendKey(Computer b){
    return {};
}
