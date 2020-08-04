#include <string>
#include <iostream>
#include "human.h"

using namespace std;

class engineer : public human{
public:
   engineer(string = "David", string = "Brown", int = 160, int = 65, string = "Mr");  
   void calculate();   
   string getTitle() const;
   void print() const;
   
   virtual void read() const;
   
   engineer &setTitle( string v );
private:
   string title;
};

