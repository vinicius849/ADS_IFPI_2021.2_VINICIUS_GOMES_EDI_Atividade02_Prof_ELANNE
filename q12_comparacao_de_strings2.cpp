#include <iostream>
#include <string.h>
#include <stdbool.h>
using namespace std;

/* Leia dois nomes e compare se os nome ss�o iguais. Se forem iguais imprima 
"S�o Iguais!", sen�o imprima "S�o Diferentes!".
OBSERVA��O:
Fa�a usando:
char nome1[20];
char nome2[20];
UTILIZE O COMANDO DE REPETI��O "FOR" PARA PERCORRER AS STRINGS CARACTERE A
CARACTERE E FAZER A COMPARA��O ENTRE ELAS. */

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
		cout << "\nS�o Iguais!";
	}else {
		cout << "\nS�o Diferentes!";
	}
	system("PAUSE");
}
				
