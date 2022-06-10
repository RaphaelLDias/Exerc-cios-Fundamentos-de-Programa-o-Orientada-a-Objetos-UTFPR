#ifndef INGRESSO_H_INCLUDED
#define INGRESSO_H_INCLUDED
#include <string>
#include "Data.h"

class Ingresso{
    string nomeDoComprador;
    Data dataDoEvento;
    int valor;

public:
    Ingresso();
    Ingresso(string, Data&, int);
    void exibir();
    void imprimeValor();
};

#endif // INGRESSO_H_INCLUDED
