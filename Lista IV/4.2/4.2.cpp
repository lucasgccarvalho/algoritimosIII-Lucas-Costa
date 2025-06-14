#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    int studentCount;
    float grade, sum;

    cout << "Digite a quantidade de alunos: ";
    cin >> studentCount;

    ofstream write;
    write.open("grades.txt");

    for (int i = 0; i < studentCount; i++) 
    {
        sum = 0;

        for (int j = 0; j < 3; j++) 
        {
            cout << "Digite a nota " << j + 1 << " do aluno " << i + 1 << ": ";
            cin >> grade;
            sum += grade;
        }

        float average = sum / 3;
        write << "Aluno " << i + 1 << ": Média = " << average << endl;
    }

    write.close();
    return 0;
}