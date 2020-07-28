#include <string>
#include <iostream>
#include "Child.h"

using namespace std;
   
Child::Child(string v, string v2)
   :name(v), 
   sirName(v2) //init const member
{
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

string Child::getSirName() const{
   return sirName;
}

void Child::setName( string val ){
   name = val;
}

