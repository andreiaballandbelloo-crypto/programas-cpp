#include<iostream>
#include<cstdlib> // usar o rand, srand
#include<ctime> // usar o time

using namespace std;

main()
{
	srand(time(0)); // produz sequências diferentes de números aleatórios a cada execução do programa
	cout << "Senha gerada: ";
	for(int i = 1; i <= 6; i++)
	{
		cout << rand() % 10; // 
	}
	
	cout << "\n\n\n";
}