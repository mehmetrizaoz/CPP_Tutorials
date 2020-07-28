#include <string>
#include <iostream>

using namespace std;

class Child{
public:
   Child();
   ~Child();
   void speak( string st );
   string getName();
   void setName( string val );
private:
   string name;
};

