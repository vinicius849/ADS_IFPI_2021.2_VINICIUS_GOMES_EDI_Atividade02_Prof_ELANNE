#include <stdio.h>
#include <stdlib.h>

/* Leia um número X e, a seguir, leia e escreva uma lista de números com o 
término da lista ocorrendo quando a soma de dois números consecutivos
da lista for igual a X. */

int main()
{
	int numero, soma;
	
	printf("Digite aqui um número para sucessão: ");
	scanf("%d", &numero);
	
	for(int i = 0; i < numero; i++) {
		soma = 1 + i;
		printf("O resultado das divisões será: %d + 1 = %d\n", i, soma);
		system("PAUSE");
	}
}
