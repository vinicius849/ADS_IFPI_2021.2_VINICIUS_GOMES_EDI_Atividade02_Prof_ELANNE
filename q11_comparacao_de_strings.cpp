#include <string.h>
#include <iostream>

using namespace std;

/* Leia dois nomes e compare se os nomes s�o iguais. Se forem iguais imprima 
"S�o Iguais!", sen�o imprima "S�o Diferentes!".
OBSERVA��O:
Fa�a usando:
char nome1[20];.
char nome2[20];
USE A FUN��O STRCMP() PARA COMPARAR AS STRINGS. */

int main() {

	char nome1[20], char nome2[20];
	
	cout << "Digite o nome 1: ";
	cin >> nome1;
	cout << "Digite o nome 2: ";
	cin >> nome2;
	
	if (strcmp(nome1[20], nome2[20]) == 0) {
		cout << "\nS�o Iguais!";
	}else {
		cout << "\nS�o Diferentes!";
	}
	system("\nPAUSE");
}
	
