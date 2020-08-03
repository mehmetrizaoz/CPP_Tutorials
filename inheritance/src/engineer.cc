#include <string>
#include <iostream>
#include "engineer.h"


using namespace std;

engineer::engineer(){
}

void engineer::calculate(){
   cout << " is calculating" << endl;
}

engineer &engineer::setTitle( string v ){
   title = v;
   return *this;
}

string engineer::getTitle() const{
   return title;
}



