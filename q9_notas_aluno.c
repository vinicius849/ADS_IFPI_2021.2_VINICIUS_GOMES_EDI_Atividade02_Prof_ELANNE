#include <stdio.h>
#include <stdlib.h>

/* Leia informa��es de alunos(matr�cula, nota1, nota2, nota3) com o fim das
informa��es indicado por matr�culas = 0. Para cada aluno deve ser calculada 
a m�dia final. Se a m�dia for igual ou superior a 7, o aluno est� aprovado; se
a m�dia for inferior a 7.0, o aluno est� reprovado. Ao final devem ser mostrados 
o total de aprovados, o total de reprovados e o total de alunos na turma. 
*/ 

int main()
{
	int matricula, aprovados, reprovados, alunos;
	float nota1, nota2, nota3, media;
	
	printf("Qual a matr�cula: ");
	scanf("%d",&matricula);
	
	while(matricula > 0)
	{ 
	alunos++;
	printf("Primeira nota: ");
	scanf("%f",&nota1);
	printf("Segunda nota: ");
	scanf("%f",&nota2);
	printf("Terceira nota: ");
	scanf("%f",&nota3);
	media =((2 * nota1) + (3 * nota2) + (5 * nota3)) / 10;
	
	if (media >= 7) {
		printf("Aprovado || media: %f || matricula: %d\n", media, matricula);
		aprovados++;
	}
	else if (media < 7) {
		printf("Reprovado || media: %f || matricula: %d\n", media, matricula);
		reprovados++;
	}
	printf("Qual a matr�cula: ");
	scanf("%d",&matricula);
	
	}
	printf("O total de alunos = %d\n O total de Reprovados = %d\n O total de aprovados = %d\n", alunos, reprovados, alunos);
	system("PAUSE");
}
