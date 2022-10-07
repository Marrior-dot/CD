#ifndef CD_H
#define CD_H
#include <string>
#include <vector>

using std::string;
using std::vector;

class Cd {
public:

  Cd( );
  Cd( const Cd & );
  ~Cd( );

  string getCdName( );
  void setCdName( const string );
  void insertContent( string );
  void printContentList( );
  void setContentNameSize( int );

private:
  string cdName;
  string contentName;
  vector <string> contentList;
  int *listPtr;
  void listSizeChange(int);

  static int listSize;
  static int contentNameSize;
};

#endif