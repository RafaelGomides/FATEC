#include <iostream>
using namespace std;

// Author: Rafael Gomides
// Date: 06/03/2018
/* Objective:
* Ler dois valores inteiros para as variáveis A e B e efetuar a troca
* dos valores de forma que a variável A passe a possuir o valor da variável B e
* a variável B passe a possuir o valor da variável A. Apresentar os valores trocados.
*/ 

int main(){

	int a=0, b=0, c=0;

	cout << "Escreva o valor de A: ";
	cin >> a;
	cout << endl;

	cout << "Escreva o valor de B: ";
	cin >> b;
	cout << endl;

	c=a;
	a=b;
	b=c;

	cout << "valor de A: " << a << "\nValor de B: " << b << endl;

	return 0;
}
