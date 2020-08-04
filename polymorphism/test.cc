#include <iostream>
#include <string>
#include "engineer.h"

int main(){
   engineer eng1;
   
   eng1.setTitle("Dr.").setName("Nikola").setSirName("Tesla");
   eng1.setHeight(170).setWeight(64);

   eng1.print();
   eng1.calculate();
   eng1.tell("yankee go home");
   eng1.run();
   eng1.walk();
   
   human *x = &eng1;
   /*if read wasnt virtual then base class read would be executed*/
   x->read(); 
 
}


