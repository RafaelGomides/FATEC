#include <iostream>
using namespace std;

// Author: Rafael Gomides
// Date: 08/03/2018
/* Objective:
* Efetuar o cálculo e a apresentação do valor de uma prestação em atraso, utilizando a fórmula
* PRESTAÇÃO <-- VALOR + (VALOR * (TAXA/100) * TEMPO)
*/ 

int main(){

	float prest=0, valor=0, taxa=0;
	int tempo=0;

	cout << "Infome o valor original: ";
	cin >> valor;
	cout << endl;

	cout << "Informe a taxa: ";
	cin >> taxa;
	cout << endl;

	cout << "Informe os dias de atraso: ";
	cin >> tempo;
	cout << endl;

	prest = valor+(valor*(taxa/100)*tempo);

	cout << "O valor da prestação atualizado: " << prest << endl;

	return 0;
}
