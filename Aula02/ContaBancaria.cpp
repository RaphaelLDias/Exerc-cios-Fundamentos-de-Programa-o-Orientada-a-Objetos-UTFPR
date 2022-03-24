#include "Conta.h"

public:
void ContaBancaria::setSaldo(float s){
    saldo = s;
}

float ContaBancaria::getSaldo(){
    return saldo;
}

void ContaBancaria::deposito(float d){
    saldo = saldo + d;
}

void ContaBancaria::saque(float sa){
    saldo = saldo - sa;
}
