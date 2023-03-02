#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int n;
    cout << "Digite um número inteiro positivo: ";
    cin >> n;

    // Exibindo os fatores primos
    cout << "Fatores primos de " << n << ": ";
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1) {
        cout << n << " ";
    }

    return 0;
}
