#include <iostream>

using namespace std;


main() {
	setlocale(LC_ALL, "Portuguese");
	int numero, casa1, casa2, casa3, soma;

	cout << "Informe um numero de tres digitos: ";
	cin >> numero;

	if (numero > 999) {

		cout << "numero invalido";

	}else {

		casa1 = numero / 100;

	    casa2 = (numero % 100) / 10;

	    casa3 = numero % 10;

	    

	    soma = (casa1 + casa2 + casa3);

	    

	    cout << "A soma dos digitos de é " << soma;

	}




}
