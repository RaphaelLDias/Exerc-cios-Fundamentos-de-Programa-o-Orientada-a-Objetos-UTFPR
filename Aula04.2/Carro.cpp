#include "Carro.h"

void Carro::desligar(){
        if(ligado == true)
            ligado = false;
    }
    void Carro::ligar(){
        ligado = true;
    }
    void Carro::frear(){
        velocidade = velocidade--;
    }
    void Carro::acelerar(){
        velocidade = velocidade++;
    }
    void Carro::setVlelocidade(float v){
        if(velocidade > 0)
            velocidade = v;
    }
    void Carro::showVelocidade(){
        cout <<"A velociade e: " << velocidade << endl;
    }
