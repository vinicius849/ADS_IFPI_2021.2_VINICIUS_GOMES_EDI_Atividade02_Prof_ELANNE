#include <stdio.h>
#include <stdlib.h>

/* Leia o salário de funcionários de uma empresa, calcule e escreva
o novo salário, a soma dos salários atuais, a soma dos salários reajustados e
a diferença entre as duas somas. (Flag: salário = 0). */

int main()
{
	int funcionarios;
	float a,b;
	int i = 0;
	float salario[i];
	
	printf("Insira o número de funcionários: ");
	scanf("%i",&funcionarios);
	
	for(i = 0; i < funcionarios; i++) {
		printf("Insira aqui o salário dos funcionários: ");
		scanf("%f",&salario[i]);
		
		if(salario[i] > 0 && salario[i] <= 2999.99) {
			a = (0.25 * salario[i]) + salario[i];
			b = (0.25 * salario[i]);
			printf("A soma %0.2f.\n E a diferença %0.2f \n", a,b);
			
		}else if(salario[i] >= 3000 && salario[i] <= 5999.99) {
			a = (0.20 * salario[i]) + salario[i];
			b = (0.20 * salario[i]);
			printf("A soma %0.2f.\n E a diferença %0.2f \n",a,b);
			
		}else if(salario[i] > 6000 && salario[i] <= 9999.99) {
			a = (0.15 * salario[i]) + salario[i];
			b = (0.15 * salario[i]);
			printf("A soma %0.2f.\n E a diferença %0.2f \n",a,b);
		}else if(salario[i] >= 10000.00) {
			a = (0.10 * salario[i]) + salario[i];
			b = (0.10 * salario[i]);
			printf("A soma %0.2f.\n E a diferença %0.2f \n",a,b);
		}
	}
}
    
