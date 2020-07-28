#include <string>
#include <iostream>

using namespace std;

class Child{
public:
   Child( string = "noName", string = "noSirName" );
   ~Child();
   void speak( string st );
   string getName() const;//const inst.'s can call this func.
   string getSirName() const;
   void setName( string val );//not this one
private:
   string name;
   const string sirName;
};

