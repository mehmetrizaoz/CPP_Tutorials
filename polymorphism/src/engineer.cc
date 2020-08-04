#include <string>
#include <iostream>
#include "engineer.h"

using namespace std;

engineer::engineer(string v1, string v2, int v3, int v4, string v5)
: human(v1, v2, v3, v4), title(v5)
{
}

void engineer::read() const{
   cout << getName() << " is an engineer and reading formulas" << endl;
}

void engineer::print() const{
   cout << getTitle() << " " << getName() << " " << getSirName() << endl;
   cout << "W: " << getWeight() << endl;
   cout << "H: " << getHeight() << endl;

}

void engineer::calculate(){
   cout << getName() << " is calculating" << endl;
}

engineer &engineer::setTitle( string v ){
   title = v;
   return *this;
}

string engineer::getTitle() const{
   return title;
}



