#include <stdio.h>
#include <stdlib.h>

/* Leia uma listas de n�meros e que para cada n�mero lido, escreva o pr�prio n�mero
e a rela��o de seus divisores(flag n�mero = 0).
*/

int main()
{
	
	int i = 0;
	int quant_numeros;
	
	printf("Digite aqui quantos n�meros deseja conferir: ");
	scanf("%i", &quant_numeros);
	
	int numeros[i];
	
	while (i <= quant_numeros) {
	printf("Digite aqui o n�mero: \n",i);
	scanf("%i",&numeros[i]);
		i++;
	}
	
	// Obs:. N�meros [1] armazena os n�meros
	// Quantidade de n�meros armazena as voltas no loop
	i = 0;
	
	// Processamento
	int divisores[i];
	
	while (i <= quant_numeros) {
	printf("Digite aqui os poss�veis divisores em comum: \n", i);
	scanf("%i",&divisores[i]);
		i++;
	}
	
	int continuacao = 0;
	
	if (divisores[i] % continuacao == 0) {
	}
	
	// Fim da quest�o
	
	printf("Divis�vel por: \n", i);
	system("PAUSE");
	return 0;
}
	
	
