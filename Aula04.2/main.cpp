#include <iostream>
#include "Carro.h"

using namespace std;


int main()
{
    Carro c1;
    Carro c2;
    Carro c3 = false;

    c1.ligar();
    c2.ligar();

    c1.setVlelocidade(10);
    c1.acelerar();
    c1.acelerar();
    c1.acelerar();

    c2.acelerar();
    c1.frear();
    c1.showVelocidade();

    return 0;
}
