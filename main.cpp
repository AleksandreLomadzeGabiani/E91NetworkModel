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
    Computer test=*new Computer("test1",15);
    std::vector<int> a=test.getBlock().getKey();
    for(int i=0;i<(int)a.size();i++){
        cout<<a.at(i);
    }
    cout<<endl<<endl;
    std::vector<int> b=test.getBlock().getKey();
    for(int i=0;i<(int)a.size();i++){
        cout<<b.at(i);
    }
    cout<<endl<<endl;
    std::vector<int> c1=OTPencryptdata(a,b);
    for(int i=0;i<(int)a.size();i++){
        cout<<c1.at(i);
    }
    cout<<endl<<endl;
    std::vector<int> data=OTPdecryptdata(c1,b);
    for(int i=0;i<(int)a.size();i++){
        cout<<data.at(i);
    }
    return 0;
}
