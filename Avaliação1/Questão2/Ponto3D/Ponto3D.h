#ifndef PONTO3D_H_INCLUDED
#define PONTO3D_H_INCLUDED
#include <iostream>

using namespace std;

class Ponto3D{
    int x, y, z;

public:
    Ponto3D();
    Ponto3D(double, double, double);
    Ponto3D(const Ponto3D &p);

    void setX(double);
    double getX();
    void setY(double);
    double getY();
    void setZ(double);
    double getZ();

    void movimento();
    void movimento(double a, double b, double c);
    void movimento(Ponto3D p);


    int comparaPonto(Ponto3D p);

};

#endif // PONTO3D_H_INCLUDED
