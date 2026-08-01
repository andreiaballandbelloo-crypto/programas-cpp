#include <iostream>
using namespace std;

main() {
	int numeros[5];
	
	system("chcp 65001");
	
	for(int i = 0; i < 5; i++) {
		cout << "Digite um número: ";
		cin >> numeros[i];
	}
	cout << "Numeros pares:\n";
	
	for(int i = 0; i < 5; i++){
		if(numeros[i] % 2 == 0){
			cout << numeros[i] << " ";
		}
	}
}