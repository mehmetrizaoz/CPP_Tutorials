#include <string>
#include <iostream>
#include "Child.h"

using namespace std;
   
Child::Child(string val){
   setName( val );
}

Child::~Child(){
   cout << getName() << "'s destructor is working" << endl;
}   

void Child::speak( string st ){
   cout << st << endl;
}

string Child::getName() const{
   return name;
}

void Child::setName( string val ){
   name = val;
}

