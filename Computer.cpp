#include "Computer.h"
#include "EntangledCubitBlock.h"
#include "qubit.h"

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

