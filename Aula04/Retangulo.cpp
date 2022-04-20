#include "Retangulo.h"

void Retangulo::definir_valores (int x, int y) {
    largura=x;
    altura=y;
}
int Retangulo::area() {return largura*altura;}
