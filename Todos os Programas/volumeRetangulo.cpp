//2. Volume = Comprimento × Largura × Altura
#include<iostream>
#include <iomanip>

using namespace std;

// Variáveis
float volume, comprimento, largura, altura;

main()
{
	system("chcp 65001");
	cout << fixed << setprecision(2);
	cout<<"\n Volume de uma Caixa Retangular \n";
	cout<<"\n Digite o comprimento da caixa: \n";
	cin>>comprimento;
	cout<<"\n Digite a largura: \n ";
	cin>>largura;
	cout<<"\n Digite a altura: \n";
	cin>>altura;
	volume = comprimento * largura * altura;
	cout<<"O volume da caixa é: \n"<<volume;
}