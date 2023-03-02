#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	int numero,i;

	cout << "informe um numero: ";
	cin >> numero;

	for (i = 1; i <= numero; i++) {

		if(numero % i == 0) {

			cout << "O numero " << i << " é um divisor de " << numero << endl;
		}
	}
}
