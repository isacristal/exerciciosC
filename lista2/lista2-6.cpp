#include <iostream>

using namespace std;

 main(){
	setlocale(LC_ALL, "Portuguese");

	int numero,termo1 = 0,termo2 = 1, proximo;

	cout << "informe um numero inteiro: ";
	cin >> numero;

	for(int i = 0; i < numero; i++) {

       if (i <= 1){

       	proximo = i;

	   }else {

	   	proximo = termo1 + termo2;

	   	termo1 = termo2;

	   	termo2 = proximo;

	   }

	   cout<<proximo<<" - ";
	   

	}

}

