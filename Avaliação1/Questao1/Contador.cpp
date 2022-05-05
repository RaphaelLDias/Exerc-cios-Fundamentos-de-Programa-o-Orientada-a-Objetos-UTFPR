#include "Contador.h"

    Contador::Contador(){
        valor = 0;
    };
    Contador::Contador(int v){
        valor = v;
    };

    void Contador::zerar(){
        valor = 0;
    };

    void Contador::incrementar(){
        valor++;
    };
    void Contador::decrementar(){
        if(--valor<0){
            valor = 0;
        }
    };
    int Contador::retornaValor(){
        return valor;
    };

    void Contador::exibeValor(){
        cout << "O valor do contador e: " << valor << endl;
    };
