#include <iostream>
using namespace std;

// Author: Rafael Gomides
// Date: 08/03/2018
/* Objective:
* Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.
*/ 

int main(){

	int idDiasEntr=0, idAnos=0, idMeses=0, idDias=0;

	cout << "Informe sua idade em dias: ";
	cin >> idDiasEntr;
	cout << endl;

	if (idDiasEntr>365)	{
		idAnos = (idDiasEntr/365);
		idDiasEntr = idDiasEntr-(idAnos*365);
	}

	if (idDiasEntr>30) {
		idMeses = (idDiasEntr/30);
		idDiasEntr = idDiasEntr-(idMeses*30);
	}

	idDias = idDiasEntr;

	cout << "Anos: " << idAnos << "\nMeses: " << idMeses << "\nDias: " << idDias << endl;

	return 0;
}
