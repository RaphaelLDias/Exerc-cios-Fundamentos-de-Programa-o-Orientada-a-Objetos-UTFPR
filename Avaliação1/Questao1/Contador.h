#ifndef CONTADOR_H_INCLUDED
#define CONTADOR_H_INCLUDED
#include <iostream>

using namespace std;

class Contador{
    int valor;

public:
    Contador();
    Contador(int);

    void zerar();
    void incrementar();
    void decrementar();
    int retornaValor();
    void exibeValor();

};



#endif // CONTADOR_H_INCLUDED
