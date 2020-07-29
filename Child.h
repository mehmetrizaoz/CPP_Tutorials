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
   static int getCount();
   Child &setName( string val );//not this one
   Child &setSirName( string val );//not this one   
private:
   string name;
   string sirName;
   static int count;   
};

