#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    float temp;
    ofstream write;
    write.open("temperatures.txt");

    for (int i = 0; i < 21; i++) {
        cout << "Insira a " << i + 1 << " temperatura: ";
        cin >> temp;
        write << temp << " ";
    }

    write.close();

    ifstream read;
    read.open("temperatures.txt");
    float biggest = -999, lowest = 999, sum = 0;
    int count = 0;

    while (read >> temp) {
        if (temp > biggest) 
        {
          biggest = temp;
        }

        if (temp < lowest)
        {
          lowest = temp;
        } 
        
        sum += temp;
        count++;
    }

    read.close();

    cout << "Maior temperatura registrada: " << biggest << endl;
    cout << "Menor temperatura registrada: " << lowest << endl;
    cout << "Media das temperaturas registradas: " << sum / count << endl;

    return 0;
}