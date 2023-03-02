#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Portuguese");

    int numero, fatorial = 1;

    

    cout << "Digite um número inteiro: ";

    cin >> numero;


for (int i = 1; i <= numero; i++){

    	 fatorial = i;

    	 cout << "O fatorial de " << numero << " é " << fatorial << endl;

}

}
