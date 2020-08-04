#include <string>
#include <iostream>
#include "human.h"

using namespace std;

class doctor : public human{
public:
   doctor(string = "Sevda", string = "Osmanoğlu", int = 165, int = 60, string = "Dr.");  
   void treat();   
   string getTitle() const;
   void print() const;
   
   virtual void read() const;
   
   doctor &setTitle( string v );
private:
   string title;
};

