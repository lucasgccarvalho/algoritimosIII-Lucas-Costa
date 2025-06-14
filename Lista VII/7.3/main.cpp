#include <iostream>
#include <stack>
#include <cctype>

using namespace std;

int main()
{
    stack<char> palindrome;
    string word;
    int counter = 0;

    cout << "Insira a palavra: ";
    cin >> word;

    for(int i = 0; i < word.length(); i++)
    {
        palindrome.push(tolower(word[i]));
    }

    for(int i = 0; i < word.length(); i++)
    {
        if(palindrome.top() == tolower(word[i]))
        {
            counter++;
        }

        palindrome.pop();
    }

    if(counter == word.length()) 
    {
        cout << "A palavra é um palindromo!" << endl;
    }
    else
    {
        cout << "A palavra não é um palindromo." << endl;
    }

    return 0;
}
