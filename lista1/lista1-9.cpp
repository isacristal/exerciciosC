#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num, originalNum, resto, resultado = 0, n = 0;

    cout << "Digite um n�mero inteiro: ";
    cin >> num;

    originalNum = num;

    // calcula o n�mero de d�gitos do n�mero
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // calcula a soma dos cubos dos d�gitos do n�mero
    while (originalNum != 0) {
        resto = originalNum % 10;
        resultado += pow(resto, n);
        originalNum /= 10;
    }

    // verifica se o n�mero � um n�mero de Armstrong
    if (resultado == num)
        cout << num << " � um n�mero de Armstrong.";
    else
        cout << num << " n�o � um n�mero de Armstrong.";

    return 0;
}

