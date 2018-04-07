#ifndef ENTANGLEDCUBITBLOCK_H
#define ENTANGLEDCUBITBLOCK_H
#include "qubit.h"
#include <bits/stdc++.h>
class EntangledCubitBlock
{
    public:
        EntangledCubitBlock();
        EntangledCubitBlock(int size);

        std::vector<int> getKey();
        std::vector<int> getCurrentState();
    protected:

    private:
        std::vector<qubit> bits;
        std::vector<int> currentState;
};

#endif // ENTANGLEDCUBITBLOCK_H
