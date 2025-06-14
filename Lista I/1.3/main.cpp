#include <iostream>
#include <locale.h>

using namespace std;

// double mult(float a, float b);

int main () {
  setlocale(LC_ALL, "Portuguese");

  double v1, v2;
  cout << "Insira o primeiro valor: ";
  cin >> v1;

  cout << "Insira o segundo valor: ";
  cin >> v2;

  cout << "A multiplicação de " << v1 << " * " << v2 << " = " << mult(v1, v2);

  return 0;
}

double mult(float a, float b) {
  return a * b;
}