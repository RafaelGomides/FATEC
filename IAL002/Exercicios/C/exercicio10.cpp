#include <iostream>
using namespace std;

// Author: Rafael Gomides
// Date: 08/03/2018
/* Objective:
* Faça um programa que calcule a área da circunferência.
*/ 

int main(){

	float raio = 0, area = 0;

	cout << "Informe o Raio [cm]: ";
	cin >> raio;
	cout << endl;

	area = 3.14159*(raio*raio);

	cout << "A área da circunferência: " << area << "cm²" << endl;

	return 0;
}
