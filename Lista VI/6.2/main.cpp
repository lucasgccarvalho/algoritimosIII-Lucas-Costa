#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{

  stack <int> convert;
  int num;

  cout << "Insira o n�mero a ser convertido: ";
  cin >> num;

  int iterator = num;
  while(iterator != 0)
  {
    convert.push(iterator % 2);
    iterator = iterator / 2;
  }

  cout << "O n�mero " << num << " convertido em bin�rio �: ";
  while(!convert.empty())
  {
    cout << convert.top();
    convert.pop();
  }
  
  return 0;
}