/*Crie um programa que tenha uma função que receba um número inteiro e imprima na 
própria função se o número é par ou ímpar.*/

#include <iostream>
using namespace std;

void verificaParImpar(int num);

int numero;

main() {
	system("chcp 65001");
	cout << " \n\ ==== Verifica Par ou ímpar ==== \n";
	cout << "\n Informe um número: ";
	cin >> numero;
	verificaParImpar(numero);
}


// Função

void verificaParImpar(int num) {
	
	if (num % 2 == 0)
		cout << "\n O número " << numero << " é Par.";
	else
		cout << "\n O número " << numero << " é Ímpar.";
	
	cout << "\n\n\n\n";
}