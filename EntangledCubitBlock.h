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
    protected:

    private:
        std::vector<qubit> bits;
};

#endif // ENTANGLEDCUBITBLOCK_H
