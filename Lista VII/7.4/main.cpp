#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{

  stack <int> convert;
  int num;

  cout << "Insira o número a ser convertido: ";
  cin >> num;

  int iterator = num;
  while(iterator != 0)
  {
    convert.push(iterator % 2);
    iterator = iterator / 2;
  }

  cout << "O número " << num << " convertido em binário é: ";
  while(!convert.empty())
  {
    cout << convert.top();
    convert.pop();
  }
  
  return 0;
}