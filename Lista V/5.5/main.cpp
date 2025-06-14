#include <iostream>

using namespace std;

#define LEN 2

int main(int argc, char const *argv[])
{
  int queue[LEN];
  int start = 0, end = 0;
  int lenght = 0;
  int ticketNumber;

  for(int i = 0; i < LEN; i++)
  {
    cout << "Insira a " << i + 1 << "ª senha: ";
    cin >> ticketNumber;
    queue[end] = ticketNumber;
    end = (end + 1) % LEN;
    lenght++;
  }

  cout << "Senha " << queue[start] << " liberada com sucesso!" << endl;
  start = (start + 1) % LEN;
  lenght--;

  cout << "Insira a próxima senha: ";
  cin >> ticketNumber;
  queue[end] = ticketNumber;
  end = (end + 1) % LEN;
  lenght++;

  for(int i = 0; i < LEN; i++)
  {
    cout << "A " << i + 1 << "ª senha da fila é: " << queue[(start + i) % LEN] << endl;
  }

  return 0;
}