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
    void desligar(){
        if(ligado == true)
            ligado = false;
    }
    void ligar(){
        ligado = true;
    }
    void frear(){
        velocidade = velocidade--;
    }
    void acelerar(){
        velocidade = velocidade++;
    }
    void setVlelocidade(float v){
        if(velocidade > 0)
            velocidade = v;
    }
};

int main()
{
    Carro c1;
    Carro c2;
    Carro c3 = false;

    c1.ligar();
    c2.ligar();

    c1.setVlelocidade(10);
    c1.acelerar();
    c1.acelerar();
    c1.acelerar();

    c2.acelerar();
    c1.frear();
    return 0;
}
