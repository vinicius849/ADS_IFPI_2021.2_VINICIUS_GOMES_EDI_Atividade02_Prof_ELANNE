#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* leia 2(dois) números, calcule e escreva o mdc(máximo divisor comum) entre 
os números lidos. */

int main() {
	int num_1,num_2, mdc;

// MDC = 5.

	printf("Cálculo de MDC\n\num_1: ");
	scanf("%d", &num_1);
	printf("Cálculo de MDC\n\num_2: ");
	scanf("%d", &num_2);
	
	if (num_1 > num_2 ) {
		mdc = num_1;
	}else {
		mdc = num_2;
	}
	
	while(!(num_1 % mdc == 0 && num_2 % mdc == 0)) {
		mdc--;
		printf("MDC = %d\n", mdc);
		system("PAUSE");
	}
}
	

