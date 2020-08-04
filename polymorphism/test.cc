#include <iostream>
#include <string>
#include "engineer.h"

int main(){
   engineer mehmet;
   
   mehmet.setTitle("Dr.").setName("Mehmet").setSirName("ÖZ");
   mehmet.setHeight(180).setWeight(70);

   mehmet.print();
   mehmet.calculate();
   mehmet.tell("yankee go home");
   mehmet.run();
   mehmet.walk();
   
   human *x = &mehmet;
   x->read();
}


