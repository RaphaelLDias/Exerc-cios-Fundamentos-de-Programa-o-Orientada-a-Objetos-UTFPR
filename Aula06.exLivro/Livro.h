#ifndef LIVRO_H_INCLUDED
#define LIVRO_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Livro{
    string titulo;
    string nomeAutor;
    string isbn;

    int numeroPaginas;
    int paginaAtual;
    int volume;
    int edicao;

public:
    Livro();

    Livro(string t, int n);

    void setTitulo(string);
    void setNomeAutor(string);
    void setNumeroPaginas(int);
    void irParaPagina(int);
    void proximaPagina();
    void exibir();
    void getUserInfo();

};



#endif // LIVRO_H_INCLUDED
