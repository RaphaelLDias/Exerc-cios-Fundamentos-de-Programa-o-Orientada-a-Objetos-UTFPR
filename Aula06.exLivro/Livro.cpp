#include "Livro.h"

    Livro::Livro(){
    titulo = "";
    nomeAutor = "";
    isbn = "";

    numeroPaginas = 0;
    paginaAtual = 0;
    volume = 0;
    edicao = 0;
    }

    Livro::Livro(string t, int n){
        titulo = t;
        numeroPaginas = n;
    }

    void Livro::setTitulo(string t){
        if(t.length()<=30){
            titulo = t;
        }
    };
    void Livro::setNomeAutor(string nome){
        if(nome.length()<=20){
        nomeAutor = nome;
        }
    };
    void Livro::setNumeroPaginas(int p){
        numeroPaginas = p;
    };
    void Livro::irParaPagina(int i){
        if(i <= numeroPaginas){
        paginaAtual = i;
        }
    };
    void Livro::proximaPagina(){
        if(paginaAtual<numeroPaginas){
            paginaAtual++;
        }
    };
    void Livro::exibir(){
        cout << "Nome do livro: " << titulo << endl;
        cout << "Pagina atual: " << paginaAtual << endl;
    };
