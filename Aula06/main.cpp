#include <iostream>
#include "Circulo.h"

using namespace std;

int main()
{
    Circulo c;

    c.setRaio(5);
    //modificaRaio(c);
    cout << "Raio: " << c.getRaio() << endl;
    cout << "Area: " << c.area() << endl;
    return 0;
}
