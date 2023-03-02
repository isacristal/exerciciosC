#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, num, soma;
	
	cout << "Introduza um número inteiro para obter o somatório dos seus digitos: ";
	cin >> numero;
	soma=0;
	
	while (numero>0)
	{
	num=numero%10;
	numero=(numero-num)/10;
	soma=soma+num;
	}
	
	cout << ("O somatório é: ",soma);

}

