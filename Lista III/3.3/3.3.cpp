#include <iostream>
#include <locale.h>

using namespace std;

int main () {
  setlocale(LC_ALL, "Portuguese");

  int* row = new int(0);
  int* columns = new int(0);

  cout << "Quantos alunos serão registrados? ";
  cin >> *row;

  cout << "Quantas notas cada aluno terá registradas? ";
  cin >> *columns;

  double** grades = new double*[*row];
  double* sums = new double[*row]();

  for(int i = 0; i < *row; i++) {
    grades[i] = new double [*columns];
  }

  for(int i = 0; i < *row; i++) {
    for(int j = 0; j < *columns; j++) {
      cout << "Insira a " << j + 1 << "ª nota do " << i + 1 << "º aluno: ";
      cin >> grades[i][j];
      sums[i] += grades[i][j];
    }
  }

  for(int i = 0; i < *row; i++) {
    cout << "A média do " << i + 1 << " aluno foi " << sums[i] / *columns << endl;
  }

  for(int i = 0; i < *row; i++) {
    delete[] grades[i];
  }

  delete[] grades; grades = nullptr;
  delete row; row = nullptr;
  delete columns; columns = nullptr;
  delete[] sums; sums = nullptr;
  
  return 0;
}