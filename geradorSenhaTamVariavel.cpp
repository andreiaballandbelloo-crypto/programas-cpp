#include <iostream>
#include <ctime>
#include<cstdlib>

using namespace std;

main()
{
	int tamanho;
	
	srand(time(0));
	
	system("chcp 65001");
	
	cout << "Tamanho da senha: ";
	cin >> tamanho;
	
	cout << "Senha gerada: ";
	for(int i = 1; i <= tamanho; i++)
		cout << rand() % 10;
}

