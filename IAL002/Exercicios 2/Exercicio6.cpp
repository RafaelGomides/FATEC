#include <cstdlib>
#include <iostream>
using namespace std;

// Author: Rafael Gomides
// Date: 20/03/2018
/* Objective:
*
*/ 

int main(int argc, char *argv[]){

	cout << "DE DOER ESSE TRIANGULO" << endl;

	float a = 0, b = 0, c = 0;
	int la = 0, lb = 0, lc = 0;

	cout << "Informe o valor do lado A: ";
	cin >> a;
	cout << endl;

	cout << "Informe o valor do lado B: ";
	cin >> b;
	cout << endl;

	cout << "Informe o valor do lado C: ";
	cin >> c;
	cout << endl;

	if (b-c < a < b+c) {
		la = 1;
	} else {
		la = 0;
	}

	if (a-c < b < a+c){
		lb = 1;
	} else {
		lb = 0;
	}

	if (a-b < c < a+b){
		lc = 1;
	}else{
		lc = 0;
	}

	if (la+lb+lc == 3){
		cout << "É possível formar um triangulo" << endl;
		if (a == b == c){
			cout <<"E é um triangulo Equilatero" << endl;
    	} else if (a == b or a == c or b == c) {
			cout <<"E é um triangulo Isósceles" << endl;
		} else {
			cout << "E é um triangulo Escaleno" << endl;
		}
	} else {
		cout << "Não é possível formar um triangulo" << endl;  
	}

		return EXIT_SUCCESS;
	}
