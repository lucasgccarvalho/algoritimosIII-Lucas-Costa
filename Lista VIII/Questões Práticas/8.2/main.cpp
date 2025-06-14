#include <iostream>
#include <string>

using namespace std;

struct Person
{
  string name;
  int age;
  float height;
};

struct Node
{
  Person person;
  Node* next;
};

void appendValue(Node* &head, Person person)
{
  Node* newNode = new Node {person, nullptr};
  
  if(!head)
  {
    head = newNode;
    return;
  }

  Node* temp = head;
  while(temp->next)
    temp = temp->next;

  temp->next = newNode;
}

void popValue(Node* &head, string name)
{
  if (!head) return;

  if(head->person.name == name)
  {
    Node* temp = head;
    head = head->next;
    delete temp;
    cout << "Pessoa " << name << " removida com sucesso." << endl;
    return;
  }

  Node* current  = head;
  while(current->next && current->next->person.name != name)
    current = current->next;

  if(current->next)
  {
    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
    cout << "Pessoa " << name << " removida com sucesso." << endl;
  } 
  else
    cout << "Pessoa " << name << " não encontrada." << endl;
}

void printList(Node* head)
{
  cout << "Lista Atual:" << endl;
  while(head)
  {
    cout << "Nome: " << head->person.name;
    cout << ", Idade: " << head->person.age;
    cout << ", Altura: " << head->person.height << endl;
    head = head->next;
  }
}

int main(int argc, char const *argv[])
{
  Node* personList = nullptr;

  for(int i = 0; i < 3; i++)
  {
    Person person;
    cout << "Insira nome: ";
    getline(cin, person.name);
    cout << "Insira idade: ";
    cin >> person.age;
    cout << "Insira altura: ";
    cin >> person.height;
    cin.ignore();

    appendValue(personList, person);
    printList(personList);
  }

  string nameToRemove;
  cout << "Insira o nome da pessoa a ser removida: ";
  getline(cin, nameToRemove);
  popValue(personList, nameToRemove);
  printList(personList);

  return 0;
}
