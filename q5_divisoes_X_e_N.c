#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Leia dois números X e N. A seguir, escreva o resultado das divisões 
de X por N onde, após cada divisão, X passa a ter como conteúdo o resultado da
divisão anterior e N é decrementado de 1 em 1, até chegar a 2. */

int main()
{
	float num_1,a,b;
	
	printf("Insira aqui um número a ser dividido: ");
	scanf("%f", num_1);
	
	while(num_1 > 1) {
		num_1 = num_1 / 2;
	}
	printf("A última divisão será: 2f%", num_1);
	system("PAUSE");
	return 0;
}
