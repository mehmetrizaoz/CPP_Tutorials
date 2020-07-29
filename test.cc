#include <iostream>
#include <string>
#include "Child.h"

int main(){
   Child myChild("mehmet", "oz");
//   Child myChild("mehmet");
//   Child myChild();   
   string word;  
   
   myChild.setName("ali").setSirName("kaya");   
   cout << "my name is " << myChild.getName() << endl;
   cout << "my sirname is " << myChild.getSirName() << endl;

   getline( cin, word );  
   myChild.speak("You told me to say " + word); 
}


