#include <iostream>
#include <locale.h>
#include <queue>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	queue <string> impressora;
	
	for(int i = 0; i < 3; i++)
	{
		string input;
		cout << "Digite o " << i + 1 << "� arquivo: " << endl;
		cin >> input;
		impressora.push(input);
	}
	
	cout << "H� " << impressora.size() << " documentos pra serem imprimidos. ";
	cout << "O pr�ximo documento da fila � " << impressora.front() << endl << ".";
	
	cout << impressora.front() << " foi imprimido, o pr�ximo ser� ";
	impressora.pop();
	cout << impressora.front();
	
	return 0;
}
