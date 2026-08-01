#include <iostream>
using namespace std;

main()
{
	int i, numero, tabuada;
	system("chcp 65001");
	
	cout << "==== TABUADA ====\n\n";
	cout << "Digite um número: ";
	cin >> numero;
	cout << "\n";
	
	cout << "Tabuada usando 'for' " << endl;
	
	for(int i = 0; i <= 10; i++)
	{
		tabuada = numero * i;
		cout << "\n" << numero << " x " << i << " = " << tabuada;
	}
	
	cout << "\n\n";
	
	i=0;
	
	cout << "Tabuada usando 'while' " << endl;
	
	while(i <= 10)
	{
		tabuada = numero * i;
		
		cout << "\n" << numero << " x " << i << " = " << tabuada;
		
		i++;
	}
	
	cout << "\n\n";
	
	i=0;
	
	cout << "Tabuada usando 'do while' " << endl;
	
	do{
		tabuada = numero * i;
		
		cout << "\n" << numero << " x " << i << " = " << tabuada;
		
		i++;
		
	 }while(i<=10);
	
}