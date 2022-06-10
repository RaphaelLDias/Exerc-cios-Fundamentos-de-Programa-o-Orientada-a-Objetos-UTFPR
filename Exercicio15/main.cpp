#include <iostream>
#include "Data.h"
#include "Ingresso.h"
#include "IngressoVip.h"

using namespace std;

int main()
{
    Data d(8,6,2022);

    Ingresso i;

    Ingresso ing("Raphael",d,80);

    IngressoVip v(15);

    v.imprimeValor();

    return 0;
}
