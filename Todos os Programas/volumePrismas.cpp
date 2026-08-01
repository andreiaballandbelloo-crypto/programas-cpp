// Aluna: Andréia Balland Bello

#include <iostream>
using namespace std;

main()
{
	int opcao;
	system("chcp 65001");
	
	do
	{
		system("cls"); // Para limpar a tela
		
		cout << "\n === ESCOLHA O TIPO DE PRISMA === \n";
		cout << "1 - Prisma Triangular \n";
		cout << "2 - Prisma Quadrangular \n";
		cout << "3 - Prisma Pentagonal \n";
		cout << "4 - Prisma Hexagonal \n";
		cout << "5 - Sair \n";
		cout << "Escolha uma opção: ";
		cin >> opcao;
		cout << "\n";
		
		switch(opcao)
		{
			case 1:
			{
				float altura_t, base_t, area_t, altura_p, volume;
				
				cout << "Volume do Prisma Triangular \n\n";
				
				cout << "Área da base pelo comprimento da altura do prisma. A sua base é um triângulo, então vamos encontrar a sua área. \n\n";
				
				cout << "Digite a base do triângulo: ";
				cin >> base_t;
				cout << "Digite a altura: ";
				cin >> altura_t;
				
				area_t = (base_t * altura_t) / 2;
				
				cout << "Determinando o volume do prisma \n";
			
				cout << "Informe a altura do prisma: ";
				cin >> altura_p;
				
				volume = area_t * altura_p;
				
				cout << "O volume do prisma é " << volume << " .";
				
				break;
			}
			
			case 2:
			{
				float lado_q, area_q, altura_p, vol_p;
				
				cout << "Volume do Prisma Quadrangular \n\n";
				
				cout << "Basta encontrar a área da base e multiplicar pela altura. A sua base é um quadrado, então vamos encontrar a sua área. \n\n";
				
				cout << "Digite o lado do quadrado: ";
				cin >> lado_q;
				
				area_q = lado_q * lado_q;
				
				cout << "Determinando o volume do prisma \n";
				
				cout << "Informe a altura do prisma: ";
				cin >> altura_p;
				
				vol_p = area_q * altura_p;
				
				cout << "O volume do prisma é " << vol_p << " .";

				break;
			}
			
			case 3:
			{
				float lado_p, ap, area_b, alt_p, volume;
				
				cout << "Volume do Prisma Pentagonal \n\n";
				
				cout << "Basta encontrar a área da base (pentágono) e multiplicar pela altura do prisma. A sua base é um pentágono, então vamos encontrar a sua área. \n\n";
				
				cout << "Digite o lado do pentágono: ";
				cin >> lado_p;
				
				cout  << "Digite o valor do apótema: ";
				cin >> ap;
				
				cout << "Determinando o volume do prisma \n";
			
				cout  << "Digite a altura do prisma: ";
				cin >> alt_p;
				
				area_b = (5 * lado_p * ap) / 2;
				
				volume = area_b * alt_p;
				
				cout << "O volume do prisma é " << volume << " .";
				
				break;
			}
			
			case 4:
			{
				float alt_p, lado_hex, ap, volume;
				
				cout << "Volume do Prisma Hexagonal \n\n";
				
				cout  << "Digite o valor do apótema: ";
				cin >> ap;
				
				cout  << "Digite o lado do hexágono: ";
				cin >> lado_hex;
				
				cout  << "Digite a altura do prisma: ";
				cin >> alt_p;
				
				volume = (3 * ap * lado_hex) * alt_p;
				
				cout << "O volume do prisma é " << volume << " .";
				
				break;
			}
			
			case 5:
				cout << "Encerrando o programa...\n";
                break;
                
            default:
                cout << "Opção inválida!\n";
	
		} // fecha o switch
		
		system("pause");
		
	} while (opcao != 5);
}