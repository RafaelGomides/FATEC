#include <cstdlib>
#include <iostream>
using namespace std;

// Author: Rafael Gomides
// Date: 20/03/2018
/* Objective: 
* Ordem numerica
*/ 

int main(int argc, char *argv[]){

	int v0 = 0, v1 = 0;

	cout << "Informe o primeiro valor: ";
	cin >> v0;
	cout << endl;

	cout << "Informe o segundo valor: ";
	cin >> v1;
	cout << endl;

	if (v0 > v1){
		cout << "O 1º Valor [" << v0 <<"] é maior que o 2º valor [" << v1 << "]" << endl;
		cout << "Ordem crescente: " << v0 << ", " << v1 << endl;
		cout << "Ordem decrescente: " << v1 << ", " << v0 << endl;
	} else if (v1 > v0){
		cout << "O 2º Valor [" << v1 <<"] é maior que o 1º valor [" << v0 << "]" << endl;
	} else {
		cout << "O 1º Valor [" << v0 <<"] é igual ao 2º valor [" << v1 << "]" << endl;
	}

	return EXIT_SUCCESS;
}
