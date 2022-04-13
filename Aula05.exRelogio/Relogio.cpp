#include <iostream>
#include "Relogio.h"

using namespace std;


    bool Relogio::validaHora(){
        if((hora>=0)&&(hora<24)){
            return true;
        }
        cout<<"Hora invalida"<<endl;
        return false;
    }

    bool Relogio::validaMinuto(){
        if((minuto>=0)&&(minuto<60)){
            return true;
        }
        cout<<"Minuto invalido"<<endl;
        return false;
    }

    bool Relogio::validaSegundo(){
        if((segundo>=0)&&(segundo<60)){
            return true;
        }
        cout<<"Segundo invalido"<<endl;
        return false;
    }

    void Relogio::informarHora(){

        do{
        cout<<"Informe a Hora: "<<endl;
        cin >> hora;
        cout<<"Informe os minutos: "<<endl;
        cin >> minuto;
        cout<<"Informe os segundos: "<<endl;
        cin >> segundo;

        }while(validaHora() == false || validaMinuto() == false || validaSegundo() == false);

    }

    void Relogio::incrementaHora(){
        if(++hora>=24)
            hora = 0;
    }

    void Relogio::incrementaMinuto(){
        if(++minuto>=60){
            incrementaHora();
            minuto=0;
        }
    }

    void Relogio::incrementaSegundo(){
        if(++segundo>=60){
            incrementaMinuto();
            segundo=0;
        }
    }

    void Relogio::decrementaHora(){
        if(--hora>=24)
            hora = 0;
    }

    void Relogio::decrementaMinuto(){
        if(--minuto>=60){
            decrementaHora();
            minuto=0;
        }
    }

    void Relogio::decrementaSegundo(){
        if(--segundo>=60){
            decrementaMinuto();
            segundo=0;
        }
    }

    void Relogio::exibirHora(){
    cout<<hora<<":"<<minuto<<":"<<segundo<<endl;
    }

    int Relogio::menu(){
        int operacao;

        do{
        cout<<"1 - Informe a Hora (hh:mm:ss)"<<endl;
        cout<<"2 - Incrementar hora"<<endl;
        cout<<"3 - Incrementar minuto"<<endl;
        cout<<"4 - Incrementar segundo"<<endl;
        cout<<"5 - Decrementar hora"<<endl;
        cout<<"6 - Decrementar minuto"<<endl;
        cout<<"7 - Decrementar segundo"<<endl;
        cout<<"8 - Exibir a hora"<<endl;
        cout<<"9 - Sair\n"<<endl;
        cout<<"Informe a sua opcao: "<<endl;

        cin>>operacao;

        switch(operacao){
            case 1:{
                informarHora();
                break;
            }
            case 2:{
                incrementaHora();
                break;
            }
            case 3:{
                incrementaMinuto();
                break;
            }
            case 4:{
                incrementaSegundo();
                break;
            }
            case 5:{
                decrementaHora();
                break;
            }
            case 6:{
                decrementaMinuto();
                break;
            }
            case 7:{
                decrementaSegundo();
                break;
            }
            case 8:{
                exibirHora();
                break;
            }
        }

        } while(operacao !=9);
    }
