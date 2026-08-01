#include <iostream>
using namespace std;

int numeros[5];

main()
{
	system("chcp 65001");
	
	for(int i = 0; i < 5; i++) 
	{
		cout << "\n Digite um número: ";
		cin >> numeros[i];
	}
	cout << "\n Números digitados:\n";
	for(int i = 0; i < 5; i++)
		cout << numeros[i] << " ";
}