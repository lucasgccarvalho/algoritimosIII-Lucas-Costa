#include <iostream>
#include <queue>

using namespace std;

#define LEN 3

int main()
{
  string queue[LEN];
  int start = 0, end = 0;
  int lenght = 0;
  string product;

  for(int i = 0; i < 3; i++)
  {
    cout << "Insira o " << i + 1 << "º produto: ";
    cin >> product;
    queue[end] = product;
    end = (end + 1) % LEN;
    lenght++;
  }

  start = (start + 1) % LEN;
  lenght--;

  cout << "Insira o novo produto que será inserido: ";
  cin >> product;
  queue[end] = product;
  end = (end + 1) % LEN;
  lenght++;

  for(int i = 0; i < LEN; i++)
  {
    cout << "O " << i + 1 << "° produto inserido foi: " << queue[(start + i) % LEN] << endl;
  }

  return 0;
}