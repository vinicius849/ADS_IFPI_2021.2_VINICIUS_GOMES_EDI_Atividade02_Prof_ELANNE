#include <stdio.h>
#include <stdlib.h>

/* Leia um n�mero X e, a seguir, leia e escreva uma lista de n�meros com o 
t�rmino da lista ocorrendo quando a soma de dois n�meros consecutivos
da lista for igual a X. */

int main()
{
	int numero, soma;
	
	printf("Digite aqui um n�mero para sucess�o: ");
	scanf("%d", &numero);
	
	for(int i = 0; i < numero; i++) {
		soma = 1 + i;
		printf("O resultado das divis�es ser�: %d + 1 = %d\n", i, soma);
		system("PAUSE");
	}
}
