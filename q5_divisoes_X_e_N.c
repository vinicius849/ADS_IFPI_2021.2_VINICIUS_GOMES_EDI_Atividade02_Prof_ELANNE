#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Leia dois n�meros X e N. A seguir, escreva o resultado das divis�es 
de X por N onde, ap�s cada divis�o, X passa a ter como conte�do o resultado da
divis�o anterior e N � decrementado de 1 em 1, at� chegar a 2. */

int main()
{
	float num_1,a,b;
	
	printf("Insira aqui um n�mero a ser dividido: ");
	scanf("%f", num_1);
	
	while(num_1 > 1) {
		num_1 = num_1 / 2;
	}
	printf("A �ltima divis�o ser�: 2f%", num_1);
	system("PAUSE");
	return 0;
}
