#include <iostream>
#include "Ingresso.h"
#include "Data.h"

using namespace std;

    Ingresso::Ingresso(){
        nomeDoComprador = "";
        dataDoEvento.setDia(1);
        dataDoEvento.setMes(1);
        dataDoEvento.setAno(1);
        valor = 0;
    }

    Ingresso::Ingresso(string n, Data& d, int v){
        nomeDoComprador = n;
        dataDoEvento = d;
        valor = v;
    }

    void Ingresso::exibir(){
        cout << "Nome do comprador: " << nomeDoComprador << endl;
        cout << "Valor pago: " << valor << endl;
        cout << "Data do evento: " << dataDoEvento.getDia() << "/" << dataDoEvento.getMes() << "/" << dataDoEvento.getAno() << endl;
    }

    void Ingresso::imprimeValor(){
        cout << "Valor pago: " << valor << endl;
    }

