#include <iostream>
#include "Conta.h"

using namespace std;

int main()
{
   ContaBancaria banco;

   banco.setSaldo(1000);
   banco.deposito(200);
   banco.saque(50);

   cout<< "Seu saldo: " << banco.getSaldo() << endl;

return 0;
}
