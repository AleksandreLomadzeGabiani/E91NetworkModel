#ifndef SERVER_H
#define SERVER_H

#include<bits/stdc++.h>

#include "EntangledQubitBlock.h"
#include "Computer.h"

class Server
{
    public:
        Server();
        Server(std::string id,std::vector<Computer*> c);

        void recieverequest(std::string id,std::string reciever);
    protected:

    private:
        std::string ID;
        std::vector<Computer*> connections;
        std::vector<int> temp;
};

#endif // SERVER_H
