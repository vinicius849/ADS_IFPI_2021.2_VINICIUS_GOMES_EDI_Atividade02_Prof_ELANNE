#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Leia 2(dois) números, calcule e escreva o mmc(mínimo múltiplo comum) entre os números
lidos. */

int main() {
	int num_1,num_2,mmc;
	
// MMC = 2.

	printf("Cálculo de MMC\n\num_1: ");
	scanf("%d", &num_1);
	printf("Cálculo de MMC\n\num_2: ");
	scanf("%d", &num_2);
	
	if (num_1 > num_2) {
		mmc = num_1;
	}else {
		mmc = num_2;
	}
	
	while(!(mmc % num_1 == 0 && mmc % num_2 == 0)) {
		mmc++;
	}
	printf("MMC = %d\n", mmc);
	system("PAUSE");
}
