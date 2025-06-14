#include <iostream>
#include <locale.h>

using namespace std;

int main () {
  setlocale(LC_ALL, "Portuguese");

  double temperatures[7];
  double* ptrTemperatures = temperatures;
  int highestTempIdx = 0, lowestTempIdx = 0;

  for(int i = 0; i < 7; i++) {
    cout << "Insira a " << i + 1 << "ª temperatura: ";
    cin >> ptrTemperatures[i];

    if(ptrTemperatures[i] > ptrTemperatures[highestTempIdx]) {
      highestTempIdx = i;
    }

    if(ptrTemperatures[i] < ptrTemperatures[lowestTempIdx]) {
      lowestTempIdx = i;
    }
  }

  cout << "A maior temperatura registrada foi de " << ptrTemperatures[highestTempIdx] << endl;
  cout << "A menor temperatura registrada foi de " << ptrTemperatures[lowestTempIdx] << endl;

  return 0;
}