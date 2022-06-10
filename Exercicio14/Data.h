#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <iostream>

using namespace std;

class Data{
int dia, mes, ano;

public:
    Data();
    Data(int, int, int);

    void setDia(int);
    void setMes(int);
    void setAno(int);

    int getDia();
    int getMes();
    int getAno();
};


#endif // DATA_H_INCLUDED
