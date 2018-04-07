#include <bits/stdc++.h>
#include <ctime>
#include <random>
#include "qubit.h"
#include "Computer.h"
#include "OTP.h"

using namespace std;

int main()
{
    srand((unsigned)time(0));
    Computer a=*new Computer("test1",15);
    Computer b=*new Computer("test2",15);

    a.sendKey(b);
    std::vector<int> z=b.getKey();
    for(int l=0;l<(int)z.size();l++){
        cout<<z.at(l);
    }
    return 0;
}
