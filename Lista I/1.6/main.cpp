#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

//Registro de dados;
void registerNames(int selectedPerson); string registeredNames[10];
void registerHeights(int selectedPerson); double registeredHeights[10];
void registerAges(int selectedPerson); int registeredAges[10];

//Verificação de idade;
void oldestPerson(int selectedPerson); int oldestPersonIdx;
void youngestPerson(int selectedPerson); int youngestPersonIdx;

//Mostrar mais velho e mais novo;
void showOldestPerson();
void showYoungestPerson();


int main () {
  setlocale(LC_ALL, "Portuguese");

  for(int i = 0; i < 10; i++) {
    registerNames(i);
    registerHeights(i);
    registerAges(i);
    cout << "\n";

    oldestPerson(i);
    youngestPerson(i);
  }

  showYoungestPerson();
  cout << "\n";
  showOldestPerson();

  return 0;
}

void registerNames(int selectedPerson) {
  cout << "Insira o nome do " << selectedPerson + 1 << "° registrado: ";
  cin >> registeredNames[selectedPerson];
}

void registerHeights(int selectedPerson) {
  cout << "Insira a altura de " << registeredNames[selectedPerson] << ": ";
  cin >> registeredHeights[selectedPerson];
}

void registerAges(int selectedPerson) {
  cout << "Insira a idade de " << registeredNames[selectedPerson] << ": ";
  cin >> registeredAges[selectedPerson];
}

void oldestPerson(int selectedPerson) {
  if(registeredAges[selectedPerson] > registeredAges[oldestPersonIdx]) {
    oldestPersonIdx = selectedPerson;
  }
}

void youngestPerson(int selectedPerson) {
  if(registeredAges[selectedPerson] < registeredAges[youngestPersonIdx]) {
    youngestPersonIdx = selectedPerson;
  }
}

void showYoungestPerson() {
  cout << "-Pessoa mais nova: ";
  cout << "-" << registeredNames[youngestPersonIdx] << "\n";
  cout << "-" << registeredAges[youngestPersonIdx] << "\n";
  cout << "-" << registeredHeights[youngestPersonIdx] << "\n";
}

void showOldestPerson() {
  cout << "-Pessoa mais velha: ";
  cout << "-" << registeredNames[oldestPersonIdx] << "\n";
  cout << "-" << registeredAges[oldestPersonIdx] << "\n";
  cout << "-" << registeredHeights[oldestPersonIdx] << "\n";
}