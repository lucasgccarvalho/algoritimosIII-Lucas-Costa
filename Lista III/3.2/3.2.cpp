#include <iostream>
#include <locale.h>

using namespace std;

int main () {
  setlocale(LC_ALL, "Portuguese");

  int sum = 0;
  int hmValues;
  cout << "Quantos valores INTEIROS deseja inserir?" << endl;
  cin >> hmValues;

  int* values = new int[hmValues];

  for (int i = 0; i < hmValues; i++) {
    cout << "Insira o " << i + 1 << "º valor: ";
    cin >> values[i];
    sum += values[i];
  }

  cout << "A somas dos valores é " << sum;
  delete[] values; values = nullptr;

  return 0;
}