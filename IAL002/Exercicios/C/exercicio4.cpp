#include <iostream>
using namespace std;

// Author: Rafael Gomides
// Date: 08/03/2018
/* Objective: 
* Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula:VOLUME <-- 3.14159 * RAIO2  * ALTURA.
*/ 

int main(){

	float raio, alt, vol;

	cout << "Informe o Raio (cm): ";
	cin >> raio;
	cout << endl;

	cout << "Informe a Altura (cm): ";
	cin >> alt;
	cout << endl;

	//volume<-raio*3.14159*altura  - A fórmula indicada está errada. Vou manter a fim de garantir a nota :P Mas vou colocar abaixo a conta certa

	vol=(3.14159*(raio*raio))*alt;

	cout << "O volume é: " << vol << "cm³" << endl;

	return 0;
}
