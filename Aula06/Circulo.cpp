#include "Circulo.h"

/*void Circulo::modificaRaio(Circulo &a){
    a.setRaio(10);
}
*/

    Circulo::Circulo(){
     raio = 0;
    }

    float Circulo::area(){
        return 2*PI*raio*raio;
    }
    void Circulo::setRaio(float r){
        raio = r;
    }
    float Circulo::getRaio(){
        return raio;
    }
