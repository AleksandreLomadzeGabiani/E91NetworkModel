#include "EntangledQubitBlock.h"
#include "Computer.h"
#include "qubit.h"
#include "OTP.h"

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

