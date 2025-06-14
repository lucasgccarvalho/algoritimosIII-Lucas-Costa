#include <iostream>
#include <locale.h>

using namespace std;

int main () {
  setlocale(LC_ALL, "Portuguese");

  int products[3][3];
  int* ptrProducts = &products[0][0];

  for(int i = 0; i < 3; i++) {
    cout << endl;
    for(int j = 0; j < 3; j++) {
      cout << "Insira o " << j + 1 << "° valor da " << i + 1 << "ª linha: ";
      cin >> products[i][j];
    }
  }

  for(int i = 0; i < 9; i++) {
    cout << *(ptrProducts + i) << " ";
    if ((i + 1) % 3 == 0) cout << endl;
  }

  return 0;
}