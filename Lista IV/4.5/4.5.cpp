#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream read("text.txt");
    string word;
    int wordCount = 0;

    while (read >> word) {
        wordCount++;
    }

    read.close();

    cout << "Há no arquivo, " << wordCount << " palavras." << endl;

    return 0;
}