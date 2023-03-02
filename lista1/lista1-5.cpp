#include <iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3, result;
   
    cout << "Informe a primera nota: ";
    cin >> nota1;
   
    cout << "Informe a segunda nota: ";
    cin >> nota2;
   
    cout << "Informe a terceira nota: ";
    cin >> nota3;
   
    result = (nota1 + nota2 + nota3) / 3;
    
    cout << "Sua média foi de: " << result << endl;
   
    if (result <= 4.9){
        cout << "Reprovado";
        
    }else if (result >=7){
        cout << "Aprovado";
        
    }else if (result > 5 && result <= 6.9){
        cout << "Recuperação";
    }
}
