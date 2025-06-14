#include <iostream>
#include <locale.h>

using namespace std;

int main () {
  setlocale(LC_ALL, "Portuguese");

  double grades[5];
  double* ptrGrade = grades;
  
  for(int i = 0; i < 5; i++) {
    cout << "Insira a nota do " << i + 1 << " aluno: ";
    cin >> ptrGrade[i];
  }

  for(int i = 0; i < 5; i++) {
    cout << "A " << i + 1 << "ª informada foi " << ptrGrade[i] << endl;
  }

  return 0;
}