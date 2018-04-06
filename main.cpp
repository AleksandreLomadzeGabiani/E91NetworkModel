#include <iostream>
#include <ctime>
#include <random>
#include "qubit.h"
#include "Computer.h"

using namespace std;

int main()
{
    srand((unsigned)time(0));
    Computer test=*new Computer("test1",15);
    std::vector<int> a=test.getKey();
    for(int i=0;i<(int)a.size();i++){
        cout<<a.at(i);
    }
    return 0;
}
