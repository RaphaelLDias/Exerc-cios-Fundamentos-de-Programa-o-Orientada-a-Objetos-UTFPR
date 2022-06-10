#include "Motorista.h"

Motorista::Motorista(string m){
    nome = m;
    cout << "Morotista criado" << endl;
}
Motorista::~Motorista(){
    cout << "Morotista destruido" << endl;
}

void Motorista::setCarro(Carro *c){
    carro = c;
}

Carro Motorista::getCarro(){
    return *carro;
}
