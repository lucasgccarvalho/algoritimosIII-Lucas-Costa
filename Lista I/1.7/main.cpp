#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
  setlocale(LC_ALL, "Portuguese");

  srand(time(0));

  int v1 = rand() % 200;
  int v2 = rand() % 251 + 250;
  int v3 = rand();

  cout << "Valor aleatório de 0 a 200: " << v1 << "\n";
  cout << "Valor aleatório de 250 a 500: " << v2 << "\n";
  cout << "Valor aleatório de 0 a " << RAND_MAX << ": " << v3 << "\n";

  return 0;
}