#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/* Leia um n�mero e divida-o por dois(sucessivamente) at� que o 
resultado seja menor do que 1. Escreva o resultado da �ltima divis�o
efetuada. */

main()
{
	int numero, soma, qtde;
	float media;
	
	printf("Digite o n�mero: ");
	scanf("%i", &numero);
	soma = 0;
	qtde = 0;
	
	while (numero != -1) {
		qtde = qtde + 1;
		soma = soma + numero;
		printf("Ent�o, o n�mero solicitado ser�: ");
		scanf("%i", &numero);
	}
	if (qtde > 0) {
		media = soma / qtde;
		printf("Assim portanto, a m�dia ser�: %6.2f", media);
	}
	else {
		printf("N�o h� n�meros lidos.");
	}
	printf("\n\n");
	system("PAUSE");
	return 0;
}

