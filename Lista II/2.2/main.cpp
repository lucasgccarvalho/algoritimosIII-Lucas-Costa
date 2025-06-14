#include <iostream>
#include <locale.h>

using namespace std;

int main () {
  setlocale(LC_ALL, "Portuguese");

  int age1, age2;
  int* ptrAge1 = &age1; 
  int* ptrAge2 = &age2;

  cout << "Insira a idade do 1º amigo: " << endl;
  cin >> age1;

  cout << "Insira a idade do 2° amigo: " << endl;
  cin >> age2;

  if (*ptrAge1 > *ptrAge2) {
    cout << "O 1° amigo é " << *ptrAge1 - *ptrAge2 << " anos mais velho que o 2°.";
  }
  else if (*ptrAge1 < *ptrAge2) {
    cout << "O 2° amigo é " << *ptrAge2 - *ptrAge1 << " anos mais velho que o 1°.";
  }
  else {
    cout << "Ambos os amigos tem " << *ptrAge2 << " anos de idade.";
  }

  return 0;
}