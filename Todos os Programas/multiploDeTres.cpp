/* Faça um programa que leia um número inteiro e passe para uma função que deverá 
retornar 1 se o número for múltiplo de 3 e 0 caso contrário. No programa principal deverá 
ser exibida uma mensagem informando o resultado.*/

#include <iostream>
using namespace std;

bool verificaNumero(int num);
int num;
bool resultado;

main() {
	
	system("chcp 65001");
	cout << "\n\n === Verifica se é múltiplo de 3 === ";
	cout << "\n\n Retorna 1 se o número for múltiplo de 3 e 0 caso contrário.";
	cout << "\n\n Informe um número inteiro diferente de zero: ";
	cin >> num;
	
	if (verificaNumero == true)
		cout << "\n\n O número é múltiplo de 3.";
	else
		cout << "\n\n O número não é múltiplo de 3.";
	
}

// FUNÇÃO

bool verificaNumero(int num) {
	
	if (num % 3 == 0)
		return true;
	else
		return false;
}