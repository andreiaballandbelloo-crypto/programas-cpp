#include <iostream>
using namespace std;

int numeros[7], contador = 0;

int main() {
    system("chcp 65001");

    for(int i = 0; i < 7; i++){
        
        do{
            cout << "Digite um número (não negativo): ";
            cin >> numeros[i];

            if(numeros[i] < 0){
                cout << "Valor inválido! Não são permitidos números negativos.\n";
            }

        } while(numeros[i] < 0); // o do while está testando a entrada

        if(numeros[i] > 10)
            contador++;
    }

    cout << "\n\nQuant. de números > que 10: " << contador;
}