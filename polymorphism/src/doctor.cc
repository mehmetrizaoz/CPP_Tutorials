#include <string>
#include <iostream>
#include "doctor.h"

using namespace std;

doctor::doctor(string v1, string v2, int v3, int v4, string v5)
: human(v1, v2, v3, v4), title(v5)
{
}

void doctor::read() const{
   cout << getName() << " is a doctor and reading disases" << endl;
}

void doctor::print() const{
   cout << "**********" << endl;
   cout << getTitle() << " " << getName() << " " << getSirName() << endl;
   cout << "W: " << getWeight() << endl;
   cout << "H: " << getHeight() << endl << "**********" << endl;

}

void doctor::treat(){
   cout << getName() << " is a doctor and treating now" << endl;
}

doctor &doctor::setTitle( string v ){
   title = v;
   return *this;
}

string doctor::getTitle() const{
   return title;
}



