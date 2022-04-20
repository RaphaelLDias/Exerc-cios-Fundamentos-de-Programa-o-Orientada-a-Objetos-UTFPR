#ifndef CARRO_H_INCLUDED
#define CARRO_H_INCLUDED
#include <iostream>

using namespace std;

class Carro{
    int peso;
    float velocidade;
    bool ligado;

public:
    Carro(){
        peso = 0;
        velocidade = 1;
        ligado = true;
        cout << "objeto carro criado construtor 1" << endl;
    }
    Carro(bool l){
        peso = 0;
        velocidade = 0;
        ligado = l;
        cout << "objeto carro criado construtor 2" << endl;
    }
    ~Carro(){
        cout << "objeto carro finalizado" << endl;
    }
    void desligar();
    void ligar();
    void frear();
    void acelerar();
    void setVlelocidade(float);
    void showVelocidade();
};

#endif // CARRO_H_INCLUDED
