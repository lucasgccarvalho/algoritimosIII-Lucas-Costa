#include <iostream>
#include <locale.h>

using namespace std;



int main () {
  setlocale(LC_ALL, "Portuguese");

  double initialSalary, percentageIncrease;
  double* ptrInitialSalary = &initialSalary; 

  cout << "Insira o salário inicial: ";
  cin >> initialSalary;
  cout << "Insira a % de aumento: ";
  cin >> percentageIncrease;

  cout << "O salário antes do aumento era de " << initialSalary << "R$." << endl;
  cout << "Após o aumento de " << percentageIncrease << "% esse valor saltou para " << *ptrInitialSalary + (*ptrInitialSalary + (percentageIncrease/100)) << "R$.";

  return 0;
}