#ifndef SERVER_H
#define SERVER_H

#include "Computer.h"
#include "qubit.h"

class Server
{
    public:
        Server();
        Server(std::string n,std::vector<Computer> c);
        Server(std::string n,int x);

        void addComputer(Computer c);
    protected:

    private:
        std::string name;
        std::vector<Computer> connections;
};

#endif // SERVER_H
