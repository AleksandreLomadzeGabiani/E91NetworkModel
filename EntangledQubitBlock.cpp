#include <bits/stdc++.h>
#include "EntangledQubitBlock.h"
#include "qubit.h"


EntangledQubitBlock::EntangledQubitBlock(int size){
    for(int i=0;i<size;i++){
        bits.push_back(*new qubit());
    }
}

EntangledQubitBlock::EntangledQubitBlock(){
    for(int i=0;i<20;i++){
        bits.push_back(*new qubit());
    }
}

std::vector<int> EntangledQubitBlock::getCurrentState(){
    return EntangledQubitBlock::currentState;
}

std::vector<int> EntangledQubitBlock::getKey(){
    int bit=0;
    std::vector<int> key;
    for(int i=0;i<(int)bits.size();i++){
        bit=bits.at(i).getValue();
        key.push_back(bit);
    }
    EntangledQubitBlock::currentState=key;
    return key;
}
