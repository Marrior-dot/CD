#include "cd.cpp"
#include "cd.h"
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  Cd Album1;
  string track1 = "Desmond Blue";
  string track2 = "Alive";
  string track3 = "Two of a Mind";
  string track4 = "Skylark";
  int A1ContentNameSize = 13;
  int A1listNameSize = 4;

  Album1.setCdName("Take Ten");
  Album1.setContentNameSize( A1ContentNameSize );
  Album1.insertContent(track1);
  Album1.insertContent(track2);
  Album1.insertContent(track3);
  Album1.insertContent(track4);


  return 0;
}