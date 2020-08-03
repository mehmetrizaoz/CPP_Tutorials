#include <string>
#include <iostream>

using namespace std;

class human{
public:
   human();
   ~human();
   
   void tell( string v );
   void run();
   void walk();
   
   string getName() const;
   string getSirName() const;
   int getWeight() const;
   int getHeight() const;
      
   human &setName( string v );
   human &setSirName( string v );
   human &setWeight( int v );
   human &setHeight( int v );

   static int getCount();
private:
   string name;
   string sirName;
   int weight;
   int height;
   static int count;   
};

