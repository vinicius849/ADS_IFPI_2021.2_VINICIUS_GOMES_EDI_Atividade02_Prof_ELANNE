#include <string.h>
#include <iostream>

using namespace std;

/* Leia dois nomes e compare se os nomes são iguais. Se forem iguais imprima 
"São Iguais!", senão imprima "São Diferentes!".
OBSERVAÇÃO:
Faça usando:
char nome1[20];.
char nome2[20];
USE A FUNÇÃO STRCMP() PARA COMPARAR AS STRINGS. */

int main() {

	char nome1[20], char nome2[20];
	
	cout << "Digite o nome 1: ";
	cin >> nome1;
	cout << "Digite o nome 2: ";
	cin >> nome2;
	
	if (strcmp(nome1[20], nome2[20]) == 0) {
		cout << "\nSão Iguais!";
	}else {
		cout << "\nSão Diferentes!";
	}
	system("\nPAUSE");
}
	
