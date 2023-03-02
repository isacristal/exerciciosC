#include<iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

     int idade, cigarros, tc;

     float d;

    cout << "*Bem-vindo*"<<endl;

    cout << "Informe a sua idade: ";
    cin >> idade;

    cout << "Informe o número de cigarros que você fuma por dia: ";
    cin >> cigarros;

    tc = (cigarros * 365) * idade;

    d = tc / 144;

    cout << "O número de dias que você perdeu é: " << d;

}
