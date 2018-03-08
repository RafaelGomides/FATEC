#include <iostream>
using namespace std;

// Author: Rafael Gomides
// Date: 08/03/2018
/* Objective:
* Faça um algoritmo que leia a idade de uma pessoa expressa em ano, mês e dia e mostre-as em dias.
*/ 

int main(){

	int ano=0, mes=0, dias=0, dia=0;

	cout << "Informe ano [AA]: ";
	cin >> ano;
	cout << endl;

	cout << "Informe mês [MM]: ";
	cin >> mes;
	cout << endl;

	cout << "Informe dias [DD]: ";
	cin >> dia;
	cout << endl;

	dias = dias+dia;

	dias = dias+(mes*30);

	dias = dias+(ano*365);

	cout << "São: " << dias << " dias" << endl;

	return 0;
}
