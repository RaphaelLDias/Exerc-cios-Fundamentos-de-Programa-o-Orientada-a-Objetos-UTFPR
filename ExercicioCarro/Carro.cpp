#include "Carro.h"

Carro::Carro(){
    cout << "Carro criado" << endl;
}
Carro::~Carro(){
    cout << "Carro destruido" << endl;
}

Pneu & Carro::getP1(){
        return p1;
    }
