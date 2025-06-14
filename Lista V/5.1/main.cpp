#include <iostream>
#include <locale.h>
#include <queue>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	queue <string> consultorio;
	consultorio.push("João");
	consultorio.push("Maria");
	consultorio.push("Carlos");
	
	cout << "O Próximo: " << consultorio.front() << endl;
	cout << consultorio.front() << " foi consultado. ";
	
	consultorio.pop();
	
	cout << "O Próximo: " << consultorio.front();
	
	return 0;
}
