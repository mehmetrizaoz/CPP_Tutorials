#include <iostream>
#include <string>
#include "Child.h"

int main(){
   Child myChild("mehmet");
   string word;
   
   getline( cin, word );  
   myChild.speak("You told me to say " + word);
   cout << "my name is " << myChild.getName() << endl;
 
   myChild.setName("ali");
   cout << "my name is " << myChild.getName() << endl;
}


