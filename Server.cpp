#include<bits/stdc++.h>

#include "Server.h"
#include "OTP.h"
Server::Server()
{
    Server::ID="NULL";
}

Server::Server(std::string id,std::vector<Computer*> c){
    Server::ID=id;
    Server::connections=c;
}

void Server::recieverequest(std::string sender,std::string reciever){
    for(int i=0;i<(int)connections.size();i++){
        if(connections.at(i)->getID()==sender){
            Server::temp=connections.at(i)->getTemp();

            break;
        }
    }
    for(int i=0;i<(int)connections.size();i++){
        if(connections.at(i)->getID()==reciever){
            connections.at(i)->recievePing();
            std::vector<int> l=connections.at(i)->getTemp();
            std::vector<int> z=OTPencryptdata(temp,l);
            connections.at(i)->recieveInfo(sender,z);
            break;
        }
    }
}
