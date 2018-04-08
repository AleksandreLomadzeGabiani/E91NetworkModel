#include <bits/stdc++.h>
#include <ctime>
#include <random>
#include "Computer.h"
#include "Server.h"
#include "qubit.h"
#include "OTP.h"
#include "misc.h"

int main()
{
    srand((unsigned)time(0));
    Computer a=*new Computer("test1",20);
    Computer b=*new Computer("test2",20);
    Server c=*new Server("test3",{&a,&b});

    //printVect(a.getBlock().getKey());

    a.sendKey(c,b);

    printVect(a.getkey().first);
    printVect(b.getkey().first);
    std::cout<<b.getkey().second;

    return 0;
}
