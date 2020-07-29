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
   static int getCount(); //can use static members
   Child &setName( string val );//for this ptr
   Child &setSirName( string val );
private:
   string name;
   string sirName;
   static int count;   
};

