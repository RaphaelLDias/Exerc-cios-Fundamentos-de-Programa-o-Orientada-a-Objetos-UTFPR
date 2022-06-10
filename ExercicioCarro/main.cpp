#include <iostream>
#include "Carro.h"
#include "Pneu.h"
#include "Motorista.h"

using namespace std;

int main()
{
    Carro c;
    Motorista m("Raphael");
    m.setCarro(&c);

    c.getP1().setPressao(30);
    cout << "Pressao do P1: " << c.getP1().getPressao() << endl;

    m.getCarro().getP1().getAro();

    return 0;
}
