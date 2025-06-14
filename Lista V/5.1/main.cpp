#include <iostream>
#include <locale.h>
#include <queue>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	queue <string> consultorio;
	consultorio.push("Jo�o");
	consultorio.push("Maria");
	consultorio.push("Carlos");
	
	cout << "O Pr�ximo: " << consultorio.front() << endl;
	cout << consultorio.front() << " foi consultado. ";
	
	consultorio.pop();
	
	cout << "O Pr�ximo: " << consultorio.front();
	
	return 0;
}
