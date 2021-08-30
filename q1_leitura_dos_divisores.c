#include <stdio.h>
#include <stdlib.h>

/* Leia uma listas de números e que para cada número lido, escreva o próprio número
e a relação de seus divisores(flag número = 0).
*/

int main()
{
	
	int i = 0;
	int quant_numeros;
	
	printf("Digite aqui quantos números deseja conferir: ");
	scanf("%i", &quant_numeros);
	
	int numeros[i];
	
	while (i <= quant_numeros) {
	printf("Digite aqui o número: \n",i);
	scanf("%i",&numeros[i]);
		i++;
	}
	
	// Obs:. Números [1] armazena os números
	// Quantidade de números armazena as voltas no loop
	i = 0;
	
	// Processamento
	int divisores[i];
	
	while (i <= quant_numeros) {
	printf("Digite aqui os possíveis divisores em comum: \n", i);
	scanf("%i",&divisores[i]);
		i++;
	}
	
	int continuacao = 0;
	
	if (divisores[i] % continuacao == 0) {
	}
	
	// Fim da questão
	
	printf("Divisível por: \n", i);
	system("PAUSE");
	return 0;
}
	
	
