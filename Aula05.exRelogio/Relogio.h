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
Relogio();

Relogio(int, int, int);
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
