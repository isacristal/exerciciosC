#include <iostream>

using namespace std;

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero, numero2, numero3, temp;

    cout << "Numero 1: ";
    cin >> numero;

    cout << "Numero 2: ";
    cin >> numero2;

    cout << "Numero 3: ";
    cin >> numero3;

	if(numero2 < numero){
	    temp = numero;
	    numero = numero2;
	    numero2 = temp;
	}

    if(numero3 < numero){
        temp = numero;
        numero = numero3;
        numero3 = temp;
    }

    if(numero3 < numero2){
        temp = numero2;
        numero2 = numero3;
        numero3 = temp;
    }

	cout << "Os numeros em ordem crescente são: ";
    cout <<numero<< " - " <<numero2<< " - " <<numero3 <<endl;
}
