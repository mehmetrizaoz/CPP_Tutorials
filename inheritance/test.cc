#include <iostream>
#include <string>
#include "engineer.h"

int main(){
   engineer mehmet;
   
   mehmet.setTitle("Dr.").setName("Mehmet").setSirName("ÖZ")
      .setHeight(180).setWeight(70);

   cout << mehmet.getTitle() << " " << mehmet.getName() << " " << mehmet.getSirName() << endl;
   cout << "height:" << mehmet.getHeight() << endl;
   cout << "weight:" << mehmet.getWeight() << endl;
   
   cout << mehmet.getName(); mehmet.calculate();
   mehmet.tell("yankee go home");
   mehmet.run();
   mehmet.walk();
   

}


