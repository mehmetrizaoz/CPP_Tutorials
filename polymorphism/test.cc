#include <iostream>
#include <string>
#include "engineer.h"
#include "doctor.h"
#include <vector>

void humanIsReading(human *hmn){
   hmn->read();
   hmn->run();
   hmn->walk();
   hmn->print();
}

int main(){
   engineer eng1;   
   
   eng1.setTitle("Dr.").setName("Nikola").setSirName("Tesla");
   eng1.setHeight(170).setWeight(64);   
   eng1.calculate();
   eng1.tell("i'm an engineer");
  
   doctor doc1;
   doc1.treat();
   doc1.tell("i'm a doctor");
            
   vector < human *> humans;
   humans.push_back(&eng1);
   humans.push_back(&doc1);

   cout << "------------------" << endl;
   while (!humans.empty()){
      humanIsReading(humans.back());
      humans.pop_back();
   }
}




