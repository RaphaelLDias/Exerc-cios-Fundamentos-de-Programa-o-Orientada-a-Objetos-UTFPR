#include <iostream>
#include "Relogio.h"

using namespace std;

int main()
{
    Relogio *r = new Relogio(22, 13, 00);

    r->menu();

    delete r;

    return 0;
}

