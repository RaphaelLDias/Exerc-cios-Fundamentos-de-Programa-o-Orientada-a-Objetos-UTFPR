#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

using namespace std;

class ContaBancaria{
public:
    float saldo=0;
    float saque, deposito;
    int escolha;

    float somar(){
    return saldo = deposito + saldo;
    }

    float subtrair(){
    return saldo = saldo - saque;
    }

    void Menu(){
         cout<<"Opcoes: \n 1 - Saque\n 2 - Deposito\n 3 - Saldo\n";
         cin>>escolha;

        }
};

#endif // CONTA_H_INCLUDED
