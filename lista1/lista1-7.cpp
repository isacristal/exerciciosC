#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	string nome;
	int salario, result, result2;
	
	cout << "Informe seu nome: ";
	cin >> nome;
	
	cout << "informe seu salario: ";
	cin >> salario;
	
	result = (1.1 * salario);
	result2 = (1.05 * salario);
	
	if (salario <= 1500) {
		cout << result;
		
	}else if (salario > 1500) {
		cout << result2;
	}
	
	
	if (salario <= 1500) {
		cout << "\n A diferença entre o salario antigo e o novo é: " << result - salario;
		
	}else if (salario > 1500) {
		cout << "\n A diferença entre o salario antigo e o novo é: " << result2 - salario;
	}
	
}
