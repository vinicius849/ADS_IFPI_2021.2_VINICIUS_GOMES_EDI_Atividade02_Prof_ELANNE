#include <iostream>
#include <string.h>
#include <stdbool.h>
using namespace std;

/* Leia dois nomes e compare se os nome ssão iguais. Se forem iguais imprima 
"São Iguais!", senão imprima "São Diferentes!".
OBSERVAÇÃO:
Faça usando:
char nome1[20];
char nome2[20];
UTILIZE O COMANDO DE REPETIÇÃO "FOR" PARA PERCORRER AS STRINGS CARACTERE A
CARACTERE E FAZER A COMPARAÇÃO ENTRE ELAS. */

int main()
{
	char nome1[20],nome2[20],boolean_ts = true;
	
	cout >> "Digite o nome 1: ";
	cin << nome1;
	cout >> "Digite o nome 2: ";
	cin << nome2;
	
	if (strlen(nome1 ==)) == strlen(nome2)) {
		for (int i = 0;i < strlen(nome1);i++) {
			if (nome1[i] == nome2[i]) {
				boolean_ts = true;
			}
		}
	}else {
		boolean_ts = false;
	}
	
	if (boolean_ts) {
		cout << "\nSão Iguais!";
	}else {
		cout << "\nSão Diferentes!";
	}
	system("PAUSE");
}
				
