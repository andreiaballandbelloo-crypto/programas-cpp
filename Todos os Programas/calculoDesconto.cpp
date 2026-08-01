#include <iostream>
using namespace std;

float valor_original, valor_final, desconto;

main()
{
	system("chcp 65001");
	
	cout<<"Digite o valor da compra: ";
	cin>>valor_original;
	
	if ( valor_original > 100)
		cout<<"O valor final é: "<<valor_final;
	else
		cout<<"Desconto não aplicado. O valor final é: "<<valor_original;		
		
	// Cálculos 
	desconto = valor_original * 0.10;
	valor_final = valor_original - desconto;
}