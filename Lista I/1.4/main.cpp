#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

const double PI = 3.14159;
double circleArea(double a = 5);

int main () {
  setlocale(LC_ALL, "Portuguese");

  cout << "A �rea do c�rculo com raio " << 5 << "� = " << circleArea();

  return 0;
}

double circleArea(double a) {
  return PI * pow(a, 2.0);
}