#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

const double PI = 3.14159;
double circleArea(int a);

int main () {
  setlocale(LC_ALL, "Portuguese");

  double radius;
  cout << "Insira o raio do círculo: ";
  cin >> radius;

  cout << "A área do círculo com raio " << radius << "° = " << circleArea(radius);

  return 0;
}

double circleArea(int a) {
  return PI * pow(a, 2.0);
}