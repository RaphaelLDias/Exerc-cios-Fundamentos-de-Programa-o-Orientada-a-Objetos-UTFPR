#ifndef CARRO_H_INCLUDED
#define CARRO_H_INCLUDED
#include <iostream>
#include "Pneu.h"

using namespace std;

class Carro{
    Pneu p1;
    Pneu p2;
    Pneu p3;
    Pneu p4;

public:
    Carro();
    ~Carro();
    Pneu & getP1();
};
#endif // CARRO_H_INCLUDED
