#include <iostream>
#include <cstdlib> // rand() e srand()
#include <ctime>   // time()

using namespace std;

 main() {
    int numeros[100], pares = 0;
    
    system("chcp 65001");

    // inicializa a semente para gerar números diferentes a cada execução
    srand(time(0));

    // preencher o vetor com números aleatórios de 0 a 100
    for(int i = 0; i < 100; i++){
        numeros[i] = rand() % 101;
    }

    // mostrar os valores
    cout << "\nNumeros aleatorios:\n";

    for(int i = 0; i < 100; i++){
        cout << numeros[i] << " ";
    }
    
    //Números Pares
    cout << "\n\nNúmeros pares:\n";

    for(int i = 0; i < 100; i++){
        if(numeros[i] % 2 == 0){// numero[i]
            cout << numeros[i] << " ";
            pares++;
        } // fecha o if
    } // fecha o for
    cout << "\n\nA quantidade de números pares é: " << pares;

}