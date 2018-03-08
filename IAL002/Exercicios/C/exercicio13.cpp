#include <iostream>
using namespace std;

// Author: Rafael Gomides
// Date: 08/03/2018
/* Objective: 
* Elaborar um programa que efetue a apresentação do valor da conversão
*      em real de um valor lido em dólar. O programa deve solicitar o valor da cotação
*      do dólar e também a quantidade de dólares disponível com o usuário, para que
*      seja apresentado o valor em moeda brasileira.
*/ 

int main(){

	float dolar=0, cota=0, mreal=0, real=0;

	cout << "Informe cotação do dolar: ";
	cin >> cota;
	cout << endl;

	cout << "Informe montante do valor em dolar que possui: ";
	cin >> dolar;
	cout << endl;

	mreal = dolar*cota;

	cout << "Você possui: R$" << mreal << endl;

	return 0;
}
