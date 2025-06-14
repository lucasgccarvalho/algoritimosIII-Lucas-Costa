#include <iostream>
#include <queue>

using namespace std;

bool verify(string w1, string w2);

int main(int argc, char const *argv[])
{

  string input1;
  string input2;

  cout << "Insira a 1º palavra: ";
  cin >> input1;

  cout << "Insira a 2º palavra: ";
  cin >> input2;

  if(verify(input1, input2))
  {
    cout << "As palavras são anagramas!";
  }
  else
  {
    cout << "As palavras não são anagramas.";
  }

  return 0;
}

bool verify(string w1, string w2)
{
  queue <char> a1;
  int counter = 0;
  
  if(w1.length() != w2.length())
  {
    return false;
  }

  for(int i = 0; i < w1.length(); i++)
  {
    a1.push(w1[i]);
  }

  while (!a1.empty()) {
      for (char letter : w2) {
          if (letter == a1.front()) {
              a1.pop();
              counter++;
              break;
          }
      }
  }

  if(counter == w2.length())
  {
    return true;
  }

  return false;
}