#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include <iostream>

using namespace std;

class human{
public:
   human(string = "David", string = "Brown", int = 160, int = 65);
   ~human();
   
   void tell( string v );
   void run();
   void walk();
   virtual void read() const = 0;
   virtual void print() const = 0;
   
   string getName() const;
   string getSirName() const;
   int getWeight() const;
   int getHeight() const;
      
   human &setName( string v );
   human &setSirName( string v );
   human &setWeight( int v );
   human &setHeight( int v );

   static int getCount();
private:
   string name;
   string sirName;
   int weight;
   int height;
   static int count;   
};

#endif
