#include <string>
#include <iostream>
#include "Child.h"

using namespace std;
   
Child::Child(string v, string v2)
   :name(v), 
   sirName(v2) //init const member object
{
}

Child::~Child(){
   cout << getName() << "'s destructor is working" << endl;
}   

void Child::speak( string v ){
   cout << v << endl;
}

string Child::getName() const{
   return name;
}

string Child::getSirName() const{
   return sirName;
}

Child &Child::setName( string v ){
   name = v;
   return *this;
}

Child &Child::setSirName( string v ){
   sirName = v;
   return *this;
}


