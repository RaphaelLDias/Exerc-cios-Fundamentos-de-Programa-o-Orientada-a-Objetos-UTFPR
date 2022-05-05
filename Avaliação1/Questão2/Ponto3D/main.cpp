#include <iostream>
#include "Ponto3D.h"

using namespace std;

int main()
{
    Ponto3D a(2,3,4);
    Ponto3D b(a);
    Ponto3D *c = new Ponto3D();
    c->movimento(5,4,3);
    b.movimento(3,4,5);

    cout << "(" << a.getX() << "," << a.getY() << "," << a.getZ() << ")" << endl;

    return 0;
};
