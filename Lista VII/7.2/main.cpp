#include <iostream>
#include <queue>
#include <unistd.h>

using namespace std;

queue <string> playlist;

void addOnPlaylist(string music);
void playMusic();
void showNext();
int menu();

int main(int argc, char const *argv[])
{

  string music;
  
  while (true)
  {
    int option = menu();
    if(option == 4) break;

    switch(option)
    {
      case 1:
        cout << "Insira o nome da música: ";
        cin.ignore();
        getline(cin, music);
        addOnPlaylist(music);
        break;

      case 2:
        playMusic();
        break;

      case 3:
        showNext();
        break;
    }
  }

  cout << "Obrigado pro escutar!!";

  return 0;
}

int menu()
{
  int value = 0;
  cout << "Insira a opção: " << endl;
  cout << "[1] Adicionar Música" << endl;
  cout << "[2] Tocar Música" << endl;
  cout << "[3] Mostrar Próxima Música" << endl;
  cout << "[4] Sair" << endl;
  cin >> value;
  return value;
}

void addOnPlaylist(string music)
{
  playlist.push(music);
  cout << "Música " << music << " Adicionada com Sucesso!" << endl << endl;
}

void playMusic()
{
  if(!playlist.empty())
  {
    cout << "Tocando " << playlist.front() << " agora!" << endl;
    sleep(3);
    playlist.pop();
  }
  else
  {
    cout << "Playlist vazia!!" << endl;
  }
}

void showNext()
{
  if(!playlist.empty())
  {
    cout << "A próxima música da playlist é " << playlist.front() << endl;
  }
  else
  {
    cout << "Playlist vazia!!" << endl;
  }
}