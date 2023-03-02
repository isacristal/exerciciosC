#include <iostream>
#include <cmath>

using namespace std;

bool eh_primo(int n) {
    if (n < 2) {
        return false;
    }
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int n, i;
    setlocale(LC_ALL, "Portuguese");
    
    cout << "Digite um número inteiro: ";
    cin >> n;
    
    cout << "Números primos menores ou iguais a " << n << ":" << endl;
    
    for (int i = 2; i <= n; i++) {
        if (eh_primo(i)) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}
