//Converter reais para dólares (usuário informa a cotação
#include<iostream>
#include <iomanip>

using namespace std;

//Variáveis
float valor, cotacao, dolar;

main()
{
	system("chcp 65001");
	cout << fixed << setprecision(2);
	cout<<"\n Conversão de reais para dólares \n";
	cout<<"\n Quantos reais você quer converter?: \n";
	cin>>valor;
	cout<<"\n Qual a cotação do dólar?: \n";
	cin>>cotacao;
	dolar = valor / cotacao;
	cout<<" \n Você tem: "<<dolar, "dolares";	
}