#include <iostream>
#include <locale.h>

using namespace std;

int main () {
  setlocale(LC_ALL, "Portuguese");

  int x = 2;
  int sum = 0.0;
  double* heights = new double[x];

  for(int i = 0; i < x; i++) {
    cout << "Insira a " << i + 1 << "� altura do vetor: ";
    cin >> heights[i];
    sum += heights[i];
  }

  cout << "A m�dia de altura final foi " << sum / x << " metros.";

  delete[] heights; heights = nullptr;

  return 0;
}