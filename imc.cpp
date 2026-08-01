#include <iostream>
#include <iomanip>
using namespace std;

// Variáveis
float peso, altura, imc;

main()
{
	system("chcp 65001");
	cout<<"\n\n Programa Cálculo de IMC \n\n";
	cout<<"Digite o peso (kg): \n";
	cin>>peso;
	cout<<"Digite a altura (m): \n";
	cin>>altura;
	imc = peso / (altura * altura);
	cout << fixed << setprecision(2);
	cout<<"\n Seu IMC é: \n"<<imc;
}