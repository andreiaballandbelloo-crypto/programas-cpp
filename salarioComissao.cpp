#include<iostream>
#include <iomanip>
using namespace std;

// Variáveis
float salarioFixo, vendas, salarioFinal;
main()
{
	system("chcp 65001");
	cout << fixed << setprecision(2); // Para casas decimais
	cout<<"\n\n Programa Cálculo de Salário com Comissão \n\n";
	cout<<"Digite o salário fixo: \n";
	cin>>salarioFixo;
	
	cout<<"Digite o total de vendas: \n";
	cin>>vendas;
	
	//Cálculo
	salarioFinal = salarioFixo + ( vendas * 0.10);
	
	cout<<"\n\n Seu Salário final: "<<salarioFinal;
}