#include <cstdlib>
#include <iostream>
using namespace std;

// Author: 
// Date:
/* Objective:
*
*/ 

int main(int argc, char *argv[]){


  // DECLARAÇÃO DE VARIAVEIS
  float a = 0, b = 0, c = 0, d = 0, menor = 0, maior = 0, mediano = 0; // vou fazer assim pq fica mais facil p vcs entenderem. espera um pouco aí. deixa eu entender uma coisa
  
  // ENTRADA DE DADOS
  cout << "Informe o primeiro Numero: ";
  cin >> a;
  cout << endl;
  
  cout << "Informe o segundo Numero: ";
  cin >> b;
  cout << endl;
  
  cout << "Informe o terceiro Numero: ";
  cin >> c;
  cout << endl;
  
  // TROCA DE VALORES
  // Verifica a igualdade entre os numeros
  if ((a==b) && (a==c)) {
  	if (b==c){
  		cout << "OS NUMEROS SÃO TODOS IGUAIS";
  	}
  }
  
  // Verifica o menor numero
  if ((a<b) && (a<c)){
  	menor = a;
  } else if ((b<a) && (b<c)) {
  	menor = b;
  } else if ((c<a) && (c<b)) {
  	menor = c;
  }
  
  // Verifica o maior numero
  if ((a>b) && (a>c)){
  	maior = a;
  } else if ((b>a) && (b>c)){
  	maior = b;
  } else if ((c>a) && (c>b)){
  	maior = c;
  }
  
  // Verifica o numero mediano
  if (((a>b) && (a<c)) || ((a<b) && (a>c))){
  	mediano = a;
  } else if (((b>a) && (b<c)) || ((b<a) && (b>c))){
  	mediano = b;
  } else if (((c>a) && (c<b)) || ((c<b) && (c>a))){
  	mediano = c;
  }
  
  a = menor;
  b = mediano;
  c = maior;
  
  cout << "O valor de A: " << a << endl << "O valor de B: " << b << endl << "O valor de C: " << c << endl;


  return EXIT_SUCCESS;
}
