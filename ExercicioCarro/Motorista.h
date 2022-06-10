#ifndef MOTORISTA_H_INCLUDED
#define MOTORISTA_H_INCLUDED
#include <string>
#include <iostream>
#include "Carro.h"

using namespace std;

class Motorista{
    string nome;
    string cnh;
    Carro *carro;

public:
    Motorista(string m);
    ~Motorista();
    void setCarro(Carro *c);
    Carro getCarro();
};

#endif // MOTORISTA_H_INCLUDED
