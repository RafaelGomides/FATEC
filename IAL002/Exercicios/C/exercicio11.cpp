#include <iostream>
using namespace std;

// Author: Rafael Gomides
// Date: 08/03/2018
/* Objective:
* Faça um programa que receba um número e mostre o resto da divisão por 6.
*/ 

int main(){

	int resto;

	cout << "Informe um número: ";
	cin >> resto;
	cout << endl;

	resto = resto%6;

	cout << "O resto é: " << resto << endl;

	return 0;
}
