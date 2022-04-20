#include "Conta.h"

void ContaBancaria::setSaldo(int s){
    saldo = s;
}

void ContaBancaria::mostrarSaldo(){
     cout<< "Seu saldo: " << saldo << endl;
}

void ContaBancaria::deposito(int d){
    saldo = s + d;
}

void ContaBancaria::saque(int sa){
    saldo = s - sa;
}
