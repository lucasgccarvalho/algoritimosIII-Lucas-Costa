#include <iostream>
#include <string>

using namespace std;

struct Node
{
  int value;
  Node* next;
};

void appendValue(Node* &head, int value)
{
  Node* newNode = new Node {value, nullptr};
  
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

void popValue(Node* &head, int value)
{
  if (!head) return;

  if(head->value == value)
  {
    Node* temp = head;
    head = head->next;
    delete temp;
    cout << "Valor " << value << " removido com sucesso!" << endl;
    return;
  }

  Node* current  = head;
  while(current->next && current->next->value != value)
    current = current->next;

  if(current->next)
  {
    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
    cout << "Valor " << value << " removido da lista." << endl;
  } 
  else
    cout << "Valor " << value << " não encontrado na lista." << endl;
}

void printList(Node* head)
{
  cout << "Lista final após a modificação: ";
  while(head)
  {
    cout << head->value << " - ";
    head = head->next;
  }
  cout << "NULL" << endl;
}

int main(int argc, char const *argv[])
{
  Node* numList = nullptr;

  for(int i = 10; i <= 30; i += 10)
    appendValue(numList, i);
    
  popValue(numList, 20);
  printList(numList);

  return 0;
}