#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{

  stack <string> actions;

  actions.push("Digitar");
  actions.push("Copiar");
  actions.push("Colar");

  cout << "A últipa opção da pilha é \"" << actions.top() << "\"" << endl;
  cout << "Elemento \"" << actions.top() << "\" removido com sucesso!" << endl;
  actions.pop();
  cout << "A nova últipa opção da pilha é \"" << actions.top() << "\"";

  return 0;
}