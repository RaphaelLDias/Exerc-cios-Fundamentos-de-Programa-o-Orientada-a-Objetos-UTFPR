#include "Data.h"

    Data::Data(){
        dia = 8;
        mes = 6;
        ano = 2022;
    }

    Data::Data(int d, int m, int a){
        dia = d;
        mes = m;
        ano = a;
    }

    void Data::setDia(int d) {
        if(d >= 1 && d <= 30)
        {
            dia = d;
        }else cout << "Dia incompativel" << endl;
    };

    void Data::setMes(int m){
        if(m >= 1 && m <= 12)
        {
            mes = m;
        }else cout << "Mes incompativel" << endl;
    };

    void Data::setAno(int a){
        if(a >= 1 && a <= 2100)
        {
            ano = a;
        }else cout << "Ano incompativel" << endl;
    };

    int Data::getDia(){
        return dia;
    }
    int Data::getMes(){
        return mes;
    }

    int Data::getAno(){
        return ano;
    }
