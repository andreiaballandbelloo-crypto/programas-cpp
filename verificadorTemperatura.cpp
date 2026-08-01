#include <iostream>
using namespace std;

float temperatura;

main()
{
	system("chcp 65001");
	
	cout<<"Digite a temperatura: ";
	cin>>temperatura;
	
	if (temperatura < 18)
		cout<<"Está frio.";
	else if (temperatura >= 18 && temperatura <= 30)
		cout<<"Temperatura agradável.";
	else
		cout<<"A temperatura está quente";
}