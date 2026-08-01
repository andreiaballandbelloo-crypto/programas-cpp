/*
1. Permitir aos usuários inserir 20 números inteiros. OK
2. A quantidade de números pares e a quantidade de números ímpares. OK
3. A soma de todos os números pares. OK
4. A média dos números ímpares. OK
5. A quantidade de números negativos.OK
6. O maior e o menor número inserido
*/


#include<iostream>
using namespace std;

int contPar, contImpar, acumPar, acumImpar, contNegat;
int numero, maior, menor;
float media;

main()
{
	system("chcp 65001");
	for(int i = 1; i <= 5; i++) // Depois arrumar pra 20
	{
		cout << "\n Digite o " << i << "º número: ";
		cin >> numero;
		// Verificando se é par ou ímpar
		if(numero % 2 == 0)
			{
				contPar++; // contador
				acumPar = acumPar + numero; // soma
			}
		else
			{
				contImpar++; // contador
				acumImpar = acumImpar + numero;
			}
		// Verificando se é negativo
		if (numero < 0)
			{
				contNegat++;	
			}
	} // fecha o for
	
	// Cálculos
		media = acumImpar / contImpar;
	
	// Impressões
	cout << "\n Foram informados: " << contPar << " Pares.";
	cout << "\n Foram informados: " << contImpar << " Impares.";
	cout << "\n A soma dos pares é: " << acumPar;
	cout << "\n A média dos impares é: " << media;
	cout << "\n Foram informados: " << contNegat << " Negativos.";
	cout << max(numero);
	cout << "\n\n\n"
}