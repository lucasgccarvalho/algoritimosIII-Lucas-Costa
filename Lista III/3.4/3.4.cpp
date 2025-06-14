#include <iostream>
#include <locale.h>

using namespace std;

struct Student {
  string* name = new string;
  float grade;
};

int main () {
  setlocale(LC_ALL, "Portuguese");

  int hmStudents;

  cout << "Quantos alunos deseja inserir? ";
  cin >> hmStudents;
  
  Student* Students = new Student[hmStudents];

  for(int i = 0; i < hmStudents; i++) {
    cout << "Insira o nome do " << i + 1 << "º aluno: " << endl;
    cin.ignore();
    getline(cin, *(Students[i].name));
    cout << "Insira a idade do " << i + 1 << "º aluno: " << endl;
    cin >> Students[i].grade;  
  }

  for(int i = 0; i < hmStudents; i++) {
    cout << i + 1 << "° aluno: " << endl;
    cout << "Nome: " << *Students[i].name << endl;
    cout << "Nota: " << Students[i].grade << endl << endl;
  }

  for(int i = 0; i < hmStudents; i++) {
    delete Students[i].name;
  }

  delete[] Students;

  return 0;
}