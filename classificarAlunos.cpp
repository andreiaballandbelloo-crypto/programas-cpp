/*
1. O programa deverá funcionar de acordo com a quantidade de alunos da turma (será necessário solicitar esse valor). OK
2. sistema de pontuação de 0 a 100 OK

Após a entrada das notas:
1. A média das notas OK
2. O número de alunos que passaram na disciplina (nota igual ou superior a 60). OK
3. O número de alunos que precisam de recuperação (nota entre 40 e 59). OK
4. O número de alunos reprovados (nota abaixo de 40). OK

if para classificar os alunos com base em suas notas. OK
contadores para acompanhar o número de alunos em cada categoria OK
acumulador para calcular a soma das notas. (pra media) OK

*/

#include <iostream>
using namespace std;

// Declaração de variáveis
int quantidadeAl, contApr, contRc, contRp;
float nota, acumNotas, media;

main()
{
	system("chcp 65001");

	cout << "\n Informe a quantidade de alunos na turma: ";
	cin >> quantidadeAl;
	
	cout << "\n === Informe as notas de 0 a 100 === \n";
	
	// Informando as notas
	for(int i = 1; i <= quantidadeAl; i++) 
	{
		cout << "\n Pontuação do " << i << "º aluno: ";
		cin >> nota;
		
		// Categorias
		if (nota >= 60)
			{
				contApr++;
			}
		else if (nota > 40 && nota < 59)
			{
				contRc++;
			}
		else 
			{
				contRp++;
			}
		
		// Soma das notas
		acumNotas += nota;
			
	} // fecha o for
	
	// Área de cálculos
	media = acumNotas / quantidadeAl;
	
	// Impressões
	cout << "\n\n\n";
	cout << "A quantidade de aprovados é: " << contApr << "\n";
	cout << "A quantidade em recuperação é " << contRc << "\n";
	cout << "A quantidade de reprovados é: " << contRp << "\n";
	cout << "A media das notas é: " << media << "\n";
	
}