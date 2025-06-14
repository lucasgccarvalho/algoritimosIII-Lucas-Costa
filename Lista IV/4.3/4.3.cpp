#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    int productCount, quantity;
    float price, totalValue = 0;

    cout << "Digite a quantidade de produtos: ";
    cin >> productCount;

    ofstream write;
    write.open("inventory.txt");

    for (int i = 0; i < productCount; i++) 
    {
        cout << "Produto " << i + 1 << " - Quantidade: ";
        cin >> quantity;
        cout << "Produto " << i + 1 << " - Preço: ";
        cin >> price;

        totalValue += quantity * price;
        write << "Produto " << i + 1 << ": " << quantity << " unidades, R$" << price << endl;
    }

    write << "Valor total do estoque: R$" << totalValue << endl;
    write.close();

    return 0;
}