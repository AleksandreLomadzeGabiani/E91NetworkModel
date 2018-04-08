#ifndef MAKESHIFTCLASSICALCHANNEL_H_INCLUDED
#define MAKESHIFTCLASSICALCHANNEL_H_INCLUDED
#include<bits/stdc++.h>
#include "Computer.h"

void sendData(Computer sender,Computer reciever,std::vector<int> msg){
    reciever.recievemsg(msg,sender.getname());
}

#endif // MAKESHIFTCLASSICALCHANNEL_H_INCLUDED
