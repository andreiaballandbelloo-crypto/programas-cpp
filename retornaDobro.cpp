/* Crie um programa que tenha uma função que receba um número e retorne o dobro 
desse valor. No programa principal deverá ser exibido o resultado.*/

#include <iostream>
using namespace std;

int retornaDobro(int num);
int numero, dobro;

main() {
	
	system("chcp 65001");
	cout << "\n === Retorna o Dobro === \n";
	cout << "\n Informe um número: ";
	cin >> numero;
	retornaDobro(numero);
	cout << "\n O dobro do número é: " << dobro;
}

// FUNÇÃO

int retornaDobro(int num) {
	return dobro = num * 2;
}