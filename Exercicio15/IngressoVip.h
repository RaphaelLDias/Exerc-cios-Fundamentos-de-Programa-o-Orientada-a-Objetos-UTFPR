#ifndef INGRESSOVIP_H_INCLUDED
#define INGRESSOVIP_H_INCLUDED
#include "Ingresso.h"

class IngressoVip : public Ingresso{
    int valorAdicional;

public:
    IngressoVip(int);
    imprimeValor();
};

#endif // INGRESSOVIP_H_INCLUDED
