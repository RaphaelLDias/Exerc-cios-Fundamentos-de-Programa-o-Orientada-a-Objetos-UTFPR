#include <iostream>
#include "IngressoVip.h"

using namespace std;

    IngressoVip::IngressoVip(int va){
        valorAdicional = va;
    }
    IngressoVip::imprimeValor(){
        cout << "Novo valor do ingresso: " << valorAdicional << endl;
    }
