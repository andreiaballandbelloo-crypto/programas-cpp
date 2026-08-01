/* Faça um programa que leia três números, passe para uma função que deverá retornar a 
média desses valores. No programa principal deverá ser exibida a média.*/

#include <iostream>
using namespace std;

float verificaMedia(float num1, float num2, float num3);
float numero1, numero2, numero3, media;

main() {
	
	system("chcp 65001");
	cout << "\n === Retorna a Média === \n";
	cout << "\n Informe o primeiro número: ";
	cin >> numero1;
	cout << "\n Informe o segundo número: ";
	cin >> numero2;
	cout << "\n Informe o terceiro número: ";
	cin >> numero3;
	verificaMedia(numero1, numero2, numero3);
	cout << "\n A média dos valores é: " << media;
	cout << "\n\n\n";
}

// FUNÇÕES

float verificaMedia(float num1, float num2, float num3) {
	return media = (num1 + num2 + num3) / 3;
}

