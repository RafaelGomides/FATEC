#include <cstdlib>
#include <iostream>
using namespace std;

// Author: Rafael Gomides
// Date: 20/03/2018
/* Objective:
* Calculo de média
*/ 

int main(int argc, char *argv[]){

	float n1 = 0, n2 = 0, media = 0;

	cout << "Informe a primeira nota: ";
	cin >> n1;
	cout << endl;

	cout << "Informe a segunda nota: ";
	cin >> n2;
	cout << endl;

	media = (n1+n2)/2;

	cout << "A média é: " << media << endl;

	if(media >= 6) {
    	cout <<"Aprovado";
  	} else {
    	cout << "Reprovado \nSEU BURRO!";
  	}

	return EXIT_SUCCESS;
}
