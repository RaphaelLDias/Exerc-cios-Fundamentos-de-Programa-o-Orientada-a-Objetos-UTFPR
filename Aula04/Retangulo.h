#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED


class Retangulo{
    int largura, altura;

    public:
        void definir_valores(int, int);
        int area() {return largura*altura;}
};

#endif // RETANGULO_H_INCLUDED
