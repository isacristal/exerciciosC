#include <iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i, resultado = 0;
 
     cout << "Digite um número: ";
     cin >> num;
     
     for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
           resultado++;
           break;
        }
     }
     
     if (resultado == 0)
        cout << "É um número primo", num;
     else
        cout << "Não é um número primo", num;
     
     return 0;
}
