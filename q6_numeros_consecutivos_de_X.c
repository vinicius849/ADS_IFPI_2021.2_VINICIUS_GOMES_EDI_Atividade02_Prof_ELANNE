#include <stdio.h>
#include <stdlib.h>

// Escreva um programa para determinar o n�mero de d�gitos de um n�mero informado.

// Leitura de d�gitos informado por uma sucess�o de repeti��es usando while.
 
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

