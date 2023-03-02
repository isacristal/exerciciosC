#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num, originalNum, resto, resultado = 0, n = 0;

    cout << "Digite um número inteiro: ";
    cin >> num;

    originalNum = num;

    // calcula o número de dígitos do número
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // calcula a soma dos cubos dos dígitos do número
    while (originalNum != 0) {
        resto = originalNum % 10;
        resultado += pow(resto, n);
        originalNum /= 10;
    }

    // verifica se o número é um número de Armstrong
    if (resultado == num)
        cout << num << " é um número de Armstrong.";
    else
        cout << num << " não é um número de Armstrong.";

    return 0;
}

