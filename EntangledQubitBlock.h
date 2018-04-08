#ifndef ENTANGLEDQUBITBLOCK_H
#define ENTANGLEDQUBITBLOCK_H
#include <bits/stdc++.h>
#include "qubit.h"

class EntangledQubitBlock
{
    public:
        EntangledQubitBlock();
        EntangledQubitBlock(int size);

        std::vector<int> getKey();
        std::vector<int> getCurrentState();
    protected:

    private:
        std::vector<qubit> bits;
        std::vector<int> currentState;
};

#endif // ENTANGLEDCUBITBLOCK_H
