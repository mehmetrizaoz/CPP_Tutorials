#include <iostream>
#include <string>
#include "Child.h"

int main(){
   Child myChild;
   Child mySecondChild("mehmet", "oz");
   string word;
   
   cout << "my name is " << myChild.getName() << " ";
   cout << myChild.getSirName() << endl;
   
   myChild.setName("ali").setSirName("kaya");   
   
   getline( cin, word );  
   myChild.speak("You told me to say " + word); 
   
   cout << Child::getCount() << endl; //static func. call
}


