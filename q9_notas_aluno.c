#include <stdio.h>
#include <stdlib.h>

/* Leia informações de alunos(matrícula, nota1, nota2, nota3) com o fim das
informações indicado por matrículas = 0. Para cada aluno deve ser calculada 
a média final. Se a média for igual ou superior a 7, o aluno está aprovado; se
a média for inferior a 7.0, o aluno está reprovado. Ao final devem ser mostrados 
o total de aprovados, o total de reprovados e o total de alunos na turma. 
*/ 

int main()
{
	int matricula, aprovados, reprovados, alunos;
	float nota1, nota2, nota3, media;
	
	printf("Qual a matrícula: ");
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
	printf("Qual a matrícula: ");
	scanf("%d",&matricula);
	
	}
	printf("O total de alunos = %d\n O total de Reprovados = %d\n O total de aprovados = %d\n", alunos, reprovados, alunos);
	system("PAUSE");
}
