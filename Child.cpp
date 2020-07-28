#include <string>
#include <iostream>
#include "Child.h"

using namespace std;
   
Child::Child(){
   name = "no name";
}

Child::~Child(){
   cout << getName() << "'s destructor is working" << endl;
}   

void Child::speak( string st ){
   cout << st << endl;
}

string Child::getName(){
   return name;
}

void Child::setName( string val ){
   name = val;
}

