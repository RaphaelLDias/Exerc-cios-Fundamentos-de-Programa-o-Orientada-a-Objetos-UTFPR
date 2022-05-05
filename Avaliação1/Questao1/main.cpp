#include <iostream>
#include "Contador.h"

using namespace std;

int main()
{
    Contador c1;
    Contador c2;
    Contador c3(10);

    c3.incrementar();
    c3.exibeValor();
    c3.decrementar();
    c3.exibeValor();
    c3.zerar();
    c3.exibeValor();

    return 0;
}
