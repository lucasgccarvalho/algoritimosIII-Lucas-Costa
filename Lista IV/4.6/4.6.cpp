#include <iostream>
#include <fstream>
using namespace std;

struct Employee 
{
    string name;
    int age;
    float salary;
};

int main() 
{
    int count;
    cout << "H� quantos funcion�rios?  ";
    cin >> count;

    Employee* employees = new Employee[count];

    ofstream write;
    write.open("employees.txt");

    for (int i = 0; i < count; i++) 
    {
        cout << "Funcion�rio " << i + 1 << " - Nome: ";
        cin >> employees[i].name;
        cout << "Funcion�rio " << i + 1 << " - Idade: ";
        cin >> employees[i].age;
        cout << "Funcion�rio " << i + 1 << " - Sal�rio: ";
        cin >> employees[i].salary;

        write << employees[i].name << " " << employees[i].age << " " << employees[i].salary << endl;
    }

    write.close();
    delete[] employees;

    return 0;
}