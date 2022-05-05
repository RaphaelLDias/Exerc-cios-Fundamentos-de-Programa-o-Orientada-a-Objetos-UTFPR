#include "Ponto3D.h"


Ponto3D::Ponto3D(){
    x = 0;
    y = 0;
    z = 0;
}

Ponto3D::Ponto3D(double a, double b, double c){
    x = a;
    y = b;
    z = c;
}

Ponto3D::Ponto3D(const Ponto3D &p){
    x = p.x;
    y = p.y;
    z = p.z;
}

void Ponto3D::setX(double a){
    x = a;
}

double Ponto3D::getX(){
    return x;
}

void Ponto3D::setY(double b){
    y = b;
}

double Ponto3D::getY(){
    return y;
}

void Ponto3D::setZ(double c){
    z = c;
}

double Ponto3D::getZ(){
    return z;
}

void Ponto3D::movimento(){
    x++;
    y++;
    z++;
}

void Ponto3D::movimento(double a, double b, double c){
    x = x+a;
    y = y+b;
    z = z+c;
}

void Ponto3D::movimento(Ponto3D p){
    x = x+p.x;
    y = y+p.y;
    z = z+p.z;
}

int Ponto3D::comparaPonto(Ponto3D p){
    if(x == p.x && y == p.y && z == p.z){
            return 1;
    }else{
        return -1;
    }
 }
