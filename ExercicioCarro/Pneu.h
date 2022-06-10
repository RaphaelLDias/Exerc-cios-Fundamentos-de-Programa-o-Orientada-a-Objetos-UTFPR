#ifndef PNEU_H_INCLUDED
#define PNEU_H_INCLUDED
#include <iostream>

using namespace std;

class Pneu{
    int aro;
    float pressao;

public:
    Pneu();
    ~Pneu();

    int getAro(){
        return aro;
    }
    void setAro(int val){
        aro = val;
    }
    float getPressao(){
        return pressao;
    }
    void setPressao(float val){
        pressao = val;
    }

};

#endif // PNEU_H_INCLUDED
