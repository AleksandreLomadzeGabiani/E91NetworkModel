#include <bits/stdc++.h>
#include <ctime>
#include <random>
#include "Computer.h"
#include "qubit.h"
#include "OTP.h"
#include "misc.h"

using namespace std;

int main()
{
    srand((unsigned)time(0));
    EntangledQubitBlock k=*new EntangledQubitBlock(15);

    k.getKey();
    std::vector<int> a=k.getCurrentState();
    std::vector<int> b=k.getKey();
    std::vector<int> c=OTPencryptdata(a,b);

    printVect(a);
    printVect(b);
    printVect(c);
    printVect(OTPdecryptdata(c,b));
    return 0;
}
