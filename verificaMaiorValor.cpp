/* Faça um programa que leia dois números, passe para uma função que deverá retornar o 
maior valor. No programa principal deverá ser exibido o maior número retornado.*/

#include <iostream>
using namespace std;

int verificaMaiorValor(int num1, int num2);
int numero1, numero2;

main() {
	system("chcp 65001");
	
	cout << "\n === Verifica Maior Valor === \n";
	cout << "\n Informe o primeiro número: ";
	cin >> numero1;
	cout << "\n Informe o segundo número: ";
	cin >> numero2;
	verificaMaiorValor(numero1, numero2);
}

// Função

int verificaMaiorValor(int num1, int num2) {
	
	if (num1 > num2)
		cout << "\n O maior valor é: " << num1;
	else
		if (num2 > num1)
			cout << "\n O maior valor é: " << num2;
	else
		cout << "\n Os valores são iguais.";
}