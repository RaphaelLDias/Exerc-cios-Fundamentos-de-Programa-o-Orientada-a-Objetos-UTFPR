#ifndef RELOGIO_H_INCLUDED
#define RELOGIO_H_INCLUDED

class Relogio{
    int hora;
    int minuto;
    int segundo;

    bool validaHora();
    bool validaMinuto();
    bool validaSegundo();

public:
Relogio(){
    hora=0;
    minuto=0;
    segundo=0;
}

Relogio(int h, int m, int s){
    hora = h;
    minuto = m;
    segundo = s;
}
    void incrementaHora();

    void incrementaMinuto();

    void incrementaSegundo();

    void decrementaHora();

    void decrementaMinuto();

    void decrementaSegundo();

    void exibirHora();

    void informarHora();

    int menu();
};

#endif // RELOGIO_H_INCLUDED
