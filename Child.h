#include <string>
#include <iostream>

using namespace std;

class Child{
public:
   Child( string = "no name" );
   ~Child();
   void speak( string st );
   string getName() const;//const instances can call only this func.
   void setName( string val );//not this one
private:
   string name;
};

