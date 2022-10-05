#ifndef CD_H
#define CD_H
#include <string>
#include <vector>

using std::string;
using std::vector;

class Cd {

  Cd( );
  Cd( const Cd & );
  ~Cd( );

public:
  string getCdName( );
  void setCdName( const string );
  void insertContent( string );
  void printContentList( );
  void setListSize( int );
  void setContentNameSize( int );

private:
  string cdName;
  string contentName;
  vector <string> contentList;
  int *listPtr;
  int *contentNamePtr;
  void listSizeChange(int);

  static int listSize;
  static int contentNameSize;
};

#endif