#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/* Leia um número e divida-o por dois(sucessivamente) até que o 
resultado seja menor do que 1. Escreva o resultado da última divisão
efetuada. */

main()
{
	int numero, soma, qtde;
	float media;
	
	printf("Digite o número: ");
	scanf("%i", &numero);
	soma = 0;
	qtde = 0;
	
	while (numero != -1) {
		qtde = qtde + 1;
		soma = soma + numero;
		printf("Então, o número solicitado será: ");
		scanf("%i", &numero);
	}
	if (qtde > 0) {
		media = soma / qtde;
		printf("Assim portanto, a média será: %6.2f", media);
	}
	else {
		printf("Não há números lidos.");
	}
	printf("\n\n");
	system("PAUSE");
	return 0;
}

