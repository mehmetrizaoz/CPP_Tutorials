#include <string>
#include <iostream>
#include "human.h"

using namespace std;

int human::count = 0;

human::human(string v1, string v2, int v3, int v4)
:name(v1), sirName(v2), height(v3), weight(v4)
{
   count++;
}

human::~human(){
   count--;
   cout << getName() << "'s destructor is working" << endl;
}   

int human::getCount(){
   return count;
}

void human::tell( string v ){
   cout << getName() << " is telling " << v << endl;
}

void human::run(){
   cout << getName() << " is running" << endl;
}

void human::walk(){
   cout << getName() << " is walking" << endl;
}

string human::getName() const{
   return name;
}

string human::getSirName() const{
   return sirName;
}

int human::getWeight() const{
   return weight;
}

int human::getHeight() const{
   return height;
}

human &human::setWeight( int v ){
   weight = v;
   return *this;
}

human &human::setHeight( int v ){
   height = v;
   return *this;
}

human &human::setName( string v ){
   name = v;
   return *this;
}		

human &human::setSirName( string v ){
   sirName = v;
   return *this;
}


