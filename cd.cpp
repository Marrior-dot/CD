#include "cd.h"
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::endl;
using std::cout;
using std::cin;

int listSize = 0;
int contentNameSize = 0;

Cd::Cd(){
  
}
Cd::Cd( const Cd& other){
  this -> cdName = other.cdName; 
}
Cd::~Cd( ){
  
}

string Cd::getCdName( ){
  return cdName;
}

void Cd::setCdName( string cdName ){
  while(cdName.size() < 0){
    cout << "Escolha um nome com comprimento maior que 0";
    cin >> cdName;
  }
  this -> cdName = cdName;
}

void Cd::insertContent( string contentName ){
  while(contentName.size() > &contentNamePtr){
    cout << "Escolha um nome para o conteudo com comprimento menor que: " << contentNamePtr;
    cin >> contentName;
  }
  //this -> 
  
}