#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
    int n, soma;
    
    cout << "Digite um numero inteiro: ";
    cin >> n;
    
    cout << "Numeros perfeitos ate " << n << ": " << endl;
    
    for (int i = 1; i < n; i++) {
        soma = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                soma += j;
            }
        }
        if (soma == i) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

