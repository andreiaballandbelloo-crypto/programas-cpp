#include <iostream>
using namespace std;

int numero;

main()
{
	system("chcp 65001");
	
	cout<<"Digite o número: ";
	cin>>numero;
	
	if (numero > 0)
		cout<<"O número é positivo.";
	else 
		if ( numero < 0)
			cout<<"O número é negativo";
	else
		cout<<"O número é zero.";
}