#include <iostream>
using namespace std;

void tabuada(int num);

int num, resultado;

main()
{
	system("chcp 65001");
	cout << "\n Informe um número: \n\n";
	cin >> num;
	tabuada(num);
	cout << "\n\n\n\n";
}


// Função

void tabuada(int num)
{
	for(int i = 0; i <= 10; i++) {
		resultado = num * i;
		cout << "\n" << num << " x " << i << " = " << resultado;
	}
}