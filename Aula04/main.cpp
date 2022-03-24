#include <iostream>
#include "Retangulo.h"

using namespace std;




int main(){
    Retangulo ret1, ret2;

    ret1.definir_valores(3,4);
    ret2.definir_valores(5,6);

    cout << "Area de ret1: " << ret1.area()<<endl;
    cout << "Area de ret2: " << ret2.area()<<endl;
    return 0;
}
