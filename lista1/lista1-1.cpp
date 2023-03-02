#include <iostream>

using namespace std;

//paremetros esta dentro do ()
float soma(float a, float b){
	return a + b;
}

float subtrai(float a, float b){
	return a - b;
}

float multiplica(float a, float b){
	return a * b;
}

float divide(float a, float b){
	return a / b;
}


main(){
	float numero, numero2;
	int option;
	
	setlocale(LC_ALL, "Portuguese");

	do {
		
		cout << "Informe o primeiro numero: ";
		cin >> numero;
	
		cout << "Informe o segundo numero: ";
		cin >> numero2;
		
		cout << "selecione uma opação: \n";
		cout << "1 - soma \n";
		cout << "2 - subtração \n";
		cout << "3 - multiplicação \n";
		cout << "4 - divisão \n";
		cout << "5 - Sair \n";
		cin >> option;
		
		switch (option){
			case 1: cout << soma(numero, numero2) << endl;
			break;
			case 2: cout << subtrai(numero, numero2) << endl;
			break;
			case 3: cout << multiplica(numero, numero2) << endl;
			break;
			case 4: cout << divide(numero, numero2) << endl;
			break;
			case 5: cout << "Opção 5 selecionada - Sair.\n";
			break;
			default: cout << "Opção nao existente.\n\n";
		}
		
	}while (option != 5);
}
