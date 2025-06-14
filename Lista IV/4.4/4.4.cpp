#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    float km, earnings, totalKm = 0, totalEarnings = 0;

    ofstream write;
    write.open("trips.txt");

    for (int i = 0; i < 7; i++) 
    {
        cout << "Dia " << i + 1 << " - Quilometragem: ";
        cin >> km;
        cout << "Dia " << i + 1 << " - Valor ganho: ";
        cin >> earnings;

        totalKm += km;
        totalEarnings += earnings;

        write << "Dia " << i + 1 << ": " << km << " km, R$" << earnings << endl;
    }

    write << "Total de km percorridos: " << totalKm << " km" << endl;
    write << "Total arrecadado: R$" << totalEarnings << endl;

    write.close();
    return 0;
}