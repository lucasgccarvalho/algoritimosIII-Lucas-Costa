#include <iostream>
#include <queue>

using namespace std;

queue<string> insertRequest();
void verifyEmpty(queue <string> r);

int main()
{ 
  verifyEmpty(insertRequest());

  return 0;
}

queue<string> insertRequest()
{
  queue <string> requests;
  for(int i =  0; i < 2; i++)
  {
    string input;
    cout << "Insira o " << i + 1 << "° pedido: ";
    getline(cin, input);
    requests.push(input);
  }
  return requests;
}

void verifyEmpty(queue <string> r)
{
  if(!r.empty())
  {
    cout << "Há pedidos na fila." << endl;
    cout << "O último pedido da fila é " << r.back();
  }
  else 
  {
    cout << "A fila está vazia.";
  }
}