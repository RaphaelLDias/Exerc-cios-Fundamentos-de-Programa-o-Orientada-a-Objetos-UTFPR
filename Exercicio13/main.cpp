#include <iostream>
#include "Data.h"
using namespace std;

int main()
{
    Data d;

    d.setDia(40);
    d.setMes(11);
    d.setAno(1987);

    cout << "Data: " << d.getDia() << "/" << d.getMes() << "/" << d.getAno() << endl;
    return 0;
}
