#include <iostream>
using namespace std;

/* Leia dois nomes e compare se os nomes são iguais. Se forem iguais imprima 
"São Iguais!", senão imprima "São Diferentes!".
OBSERVAÇÃO:
Faça usando:
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
		cout << "\nSão Iguais!";
	}else {
		cout << "\nSão Diferentes!";
	}
	system("PAUSE");
}
