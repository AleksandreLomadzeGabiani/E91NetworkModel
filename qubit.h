#ifndef QUBIT_H
#define QUBIT_H


class qubit
{
    public:
        qubit();
        qubit(double a);

        int getValue();
        bool isEntangled();
    protected:

    private:
        double A;
        double B;
};

#endif // QUBIT_H
