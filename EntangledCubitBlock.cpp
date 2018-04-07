#include "EntangledCubitBlock.h"
#include "qubit.h"
#include <bits/stdc++.h>

EntangledCubitBlock::EntangledCubitBlock(int size){
    for(int i=0;i<size;i++){
        bits.push_back(*new qubit());
    }
}

EntangledCubitBlock::EntangledCubitBlock(){
    for(int i=0;i<20;i++){
        bits.push_back(*new qubit());
    }
}

std::vector<int> EntangledCubitBlock::getKey(){
    int bit=0;
    std::vector<int> key;
    for(int i=0;i<(int)bits.size();i++){
        bit=bits.at(i).getValue();
        key.push_back(bit);
    }
    return key;
}
