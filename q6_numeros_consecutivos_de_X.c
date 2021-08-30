#include <stdio.h>
#include <stdlib.h>

// Escreva um programa para determinar o número de dígitos de um número informado.

// Leitura de dígitos informado por uma sucessão de repetições usando while.
 
int main()
{
	int c = 1;
	
	while(c <= 800) {
		printf("Passo c %8d: \n");
		scanf("%d",&c);
		c++;
	}
	printf("\n");
	system("PAUSE");
}

