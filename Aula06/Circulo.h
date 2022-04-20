#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include <iostream>

using namespace std;

class Circulo{
    const float PI=3.14;
    float raio;

public:

    Circulo();

    float area();

    void setRaio(float);

    float getRaio();
};

#endif // CIRCULO_H_INCLUDED
