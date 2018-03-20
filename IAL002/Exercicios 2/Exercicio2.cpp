#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

// Author: Rafael Gomides
// Date: 20/03/18
/* Objective:
* Raiz
*/ 

int main(int argc, char *argv[]){


  // DECLARAÇÃO DE VARIÁVEIS  
  float a = 0, b = 0, c = 0, delta = 0, xP = 0, xN = 0;
  
  // INICIANDO APLICAÇÃO
  cout << "Calculo de equação de 2º Grau" << endl;
  
  // COLETANDO DADOS NECESSÁRIOS PARA AS CONTAS
  cout << "Informe o valor de A: ";
  cin >> a;
  cout << endl;
  
  cout << "Informe o valor de B: ";
  cin >> b;
  cout << endl;
  
  cout << "Informe o valor de C: ";
  cin >> c;
  cout << endl;

  // INICIANDO PROCESSAMENTO DAS CONTAS (PASSO 1)
  delta = (b*b)-4*a*c;
  
  // VERIFICANDO QUANTIDADES DE RAIZES (PASSO 2)
  if (delta > 0) {
    cout << "Delta é igual a " << delta << ", logo possui duas Raizes!";
    xP = (-b+sqrt(delta))/2*a;
    xN = (-b-sqrt(delta))/2*a;
    cout << "As Raizes são: x1: " << xP << " e x2: " << xN << endl;
  } else if (delta < 0) {
    cout << "Delta é igual a " << delta << ", logo não possui Raizes!";
  } else {
    cout << "Delta é igual a " << delta << ", logo possui uma Raiz";
    xP = (-b+sqrt(delta))/2*a;
    cout << "A Raiz é: x:" << xP << endl;
  }

	return EXIT_SUCCESS;
}
