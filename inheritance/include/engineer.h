#include <string>
#include <iostream>
#include "human.h"

using namespace std;

class engineer : public human{
public:
   engineer();  
   void calculate();   
   string getTitle() const;

   engineer &setTitle( string v );
private:
   string title;
};

