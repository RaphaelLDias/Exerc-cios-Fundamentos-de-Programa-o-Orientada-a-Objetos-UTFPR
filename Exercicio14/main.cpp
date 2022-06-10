#include <iostream>
#include "Data.h"
#include "Ingresso.h"

using namespace std;

int main()
{
    Data d(8,6,2022);

    Ingresso i;

    Ingresso ing("Raphael",d,80);

    ing.imprimeValor();

    return 0;
}
