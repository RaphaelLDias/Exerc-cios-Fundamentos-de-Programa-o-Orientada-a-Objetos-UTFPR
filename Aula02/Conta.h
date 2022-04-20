#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

using namespace std;

class ContaBancaria{

    int saldo;
    //string correntista;
    //int numeroConta;

public:
    ContaBancaria(){
        saldo = 0;
    }

    void setSaldo(int);

    void mostrarSaldo();

    void deposito(int);

    void saque(int);

};

#endif // CONTA_H_INCLUDED
