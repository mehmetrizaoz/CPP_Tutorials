#include <iostream>
#include <string>
#include "engineer.h"
#include "doctor.h"

int main(){
   engineer eng1;   
   eng1.setTitle("Dr.").setName("Nikola").setSirName("Tesla");
   eng1.setHeight(170).setWeight(64);

   eng1.print();
   eng1.calculate();
   eng1.tell("i'm an engineer");
   eng1.run();
   eng1.walk();
   eng1.read();
   
   doctor doc1;
   doc1.print();
   doc1.treat();
   doc1.tell("i'm a doctor");
   doc1.run();
   doc1.walk();
   doc1.read();    
   
   human *human_eng = &eng1;
   human_eng->read(); 
   
   human *human_doc = &doc1;
   human_doc->read(); 
}




