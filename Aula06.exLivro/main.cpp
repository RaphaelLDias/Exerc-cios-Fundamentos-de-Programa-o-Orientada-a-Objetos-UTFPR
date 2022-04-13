#include <iostream>
#include <string>
#include "Livro.h"

using namespace std;

int main()
{
    Livro l1;
    Livro l2("Lord of The Rings", 400);

    l1.exibir();
    l2.exibir();
    return 0;
}
