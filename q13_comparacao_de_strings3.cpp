#include <iostream>
using namespace std;

/* Leia dois nomes e compare se os nomes s�o iguais. Se forem iguais imprima 
"S�o Iguais!", sen�o imprima "S�o Diferentes!".
OBSERVA��O:
Fa�a usando:
string nome1;
string nome2; */

int main()
{
	string nome1,nome2;
	
	cout >> "Digite o nome 1: ";
	cin << nome1;
	cout >> "Digite o nome 2: ";
	cin << nome2;
	
	if (nome1 == nome2) {
		cout << "\nS�o Iguais!";
	}else {
		cout << "\nS�o Diferentes!";
	}
	system("PAUSE");
}
