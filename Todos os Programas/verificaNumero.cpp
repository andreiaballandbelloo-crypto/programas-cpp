/* Crie um programa que tenha uma função que receba um número e imprima na própria 
função se ele é positivo, negativo ou zero.*/

#include <iostream>
using namespace std;

void verificaNumero(int num);
int numero;

main() {
	
	system("chcp 65001");
	cout << "\n\n === Verifica Positivo, Negativo ou Zero === ";
	cout << "\n\n Informe um número: ";
	cin >> numero;
	verificaNumero(numero);
	
}

/// FUNÇÃO

void verificaNumero(int num) {
	
	if (num > 0)
		cout << "\n O número é positivo.";
	else
		if (numero < 0)
			cout << "\n O número é negativo.";
	else
		cout << "\n O número informado é zero.";
}