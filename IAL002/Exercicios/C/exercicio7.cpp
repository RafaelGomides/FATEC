#include <iostream>
using namespace std;

// Author: Rafael Gomides
// Date: 08/03/2018
/* Objective:
* Ler um número inteiro positivo e calcular e mostrar a tabuada
*/ 

int main(){

	int prod = 0;

	cout << "Saber a Tabuada de: ";
	cin >> prod;

	for (int i = 0; i < 11; ++i) {
		cout << prod << " x " << i << " = " << (prod*i) << endl;
	}

	return 0;
}
