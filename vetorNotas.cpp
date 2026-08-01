/* FUP que leia um vetor de 10 notas OK
a. Não permita notas erradas (menor que zero e maior que 10 (usando sistema de notas de 0 a 10)) OK
b. Calcule a média das notas OK
c. Mostre a quantidade de alunos que reprovam com
	nota < 7. OK
d. Mostre a quantidade de alunos que tiveram a nota maior que a media de todas as notas
*/

#include <iostream>
using namespace std;

float notas[10];
float media, acum_notas;
int qtd_reprovados, maior_media;

main() {
	system("chcp 65001");
	
	for(int i = 0; i < 5; i++){
		
		// Verificando as entradas
		do{
			cout << "Informe a nota (0 a 10): ";
		 	cin >> notas[i];
			 	
			if(notas[i] < 0 || notas[i] > 10){
				cout << "\nNota inválida! \n";	
			}
			
		}while(notas[i] < 0 || notas[i] > 10); 
		
		if(notas[i] < 7){
			qtd_reprovados++;
		}
		
		// Cálculo de média
		acum_notas += notas[i]; // acumula as notas
		media = acum_notas / 5;
			
	} // fecha o for
	
	for(int i = 0; i < 10; i++){
			
		if(notas[i] > media){
			maior_media++;
		}	
		
	} // fecha o for
	
	
	// Área de impressões
	
	cout << "\nA media das notas é " << media;
	cout << "\nA quantidade de alunos que reprovaram com nota menor que 7 é: " << qtd_reprovados;
	cout << "\nNota maior que a media de todas as notas: " << maior_media;
	
}