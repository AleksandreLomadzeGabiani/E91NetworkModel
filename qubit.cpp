#include "qubit.h"
#include <random>

qubit::qubit(double a){
    A=a;
    B=1-A;
}
qubit::qubit(){
    A=0.5;
    B=0.5;
}


bool qubit::isEntangled(){
    if(qubit::A==0.5){
        return true;
    }else{
        return false;
    }
}

int qubit::getValue(){
    if(isEntangled()){
        if(rand()%100>=50){
            return 1;
        }else{
            return 0;
        }
    }else{
        return -1;
    }
}
