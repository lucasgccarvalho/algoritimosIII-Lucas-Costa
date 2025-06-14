#include <iostream>
#include <fstream>
using namespace std;

struct Book 
{
    string title;
    string author;
    int year;
};

int main() 
{
    int count;
    cout << "Há quantos livros? ";
    cin >> count;

    Book* books = new Book[count];

    ofstream write;
    write.open("books.txt");

    for (int i = 0; i < count; i++) {
        cin.ignore();
        cout << "Livro " << i + 1 << " - Título: ";
        getline(cin, books[i].title);
        cout << "Livro " << i + 1 << " - Autor: ";
        getline(cin, books[i].author);
        cout << "Livro " << i + 1 << " - Ano: ";
        cin >> books[i].year;

        write << books[i].title << "," << books[i].author << "," << books[i].year << endl;
    }

    write.close();
    delete[] books;

    return 0;
}