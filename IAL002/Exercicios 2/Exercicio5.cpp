#include <cstdlib>
#include <iostream>
using namespace std;

// Author: 
// Date:
/* Objective:
*
*/ 

int main(int argc, char *argv[]){

	int v0=0;
	cout <<"Informe um valor inteiro positivo:";
	cin >> v0;
	if (v0 % 2 == 0 ){
		cout <<"Par";
	}
	else{
		cout <<"Ímpar";
	}
	return 0;


	return EXIT_SUCCESS;
}