#include "cd.h"
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int Cd::listSize = 0;
int Cd::contentNameSize = 0;

Cd::Cd(){}
Cd::Cd(const Cd &other) { this->cdName = other.cdName; }
Cd::~Cd(){}

string Cd::getCdName() { return cdName; }

void Cd::setCdName(string cdName) {
  while (cdName.size() < 3) {
    cout << "Escolha um nome com comprimento maior que 3"
         << "\n";
    cin >> cdName;
  }
  this->cdName = cdName;
  cout << "O nome do cd é:" << cdName;
}

void Cd::insertContent(string contentName) {
  while (contentName.size() > contentNameSize) {
    cout << "Escolha um nome para o conteudo com comprimento menor que: "
         << contentNameSize << "\n";
    cin >> contentName;
  }
  if (contentList.size() == listSize) {
    string qs = "";
    *listPtr = listSize;
    cout << "o CD está cheio, não é possível por mais conteúdo"
         << "/n"
         << "Deseja trocar para um cd Maior?Digite S para Sim e N para Não";
    cin >> qs;
    if (qs == "S"){
      cout << "Digite o tamanho desejado: ";
      cin >> listSize;
      while( listSize <= *listPtr ){
        cout << "Digite um tamanho maior que: " << *listPtr;
        cin >> listSize;
      }
      listSizeChange(listSize);
    }
      return;
  }
  contentList.push_back(contentName);
}

void Cd::printContentList() {
  cout << "Conteúdo do " << getCdName();
  for (int i = 0; i < contentList.size(); i++) {
    cout << contentList[i] << "\n";
  }
}

void Cd::setContentNameSize(int contentNameSize) {
  this->contentNameSize = contentNameSize;
}

void Cd::listSizeChange(int listSize) {
  this -> listSize = listSize;
}
