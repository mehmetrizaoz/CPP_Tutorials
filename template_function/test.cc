#include <iostream>
#include "maximum.h" 

using namespace std;

int main(){
   int int1, int2, int3;

   cout << "Input three integer values: ";
   cin >> int1 >> int2 >> int3;

   cout << "The maximum integer value is: "
      << maximum( int1, int2, int3 );        

   double double1, double2, double3;

   cout << "\n\nInput three double values: ";
   cin >> double1 >> double2 >> double3;

   cout << "The maximum double value is: "
      << maximum( double1, double2, double3 );

   char char1, char2, char3;

   cout << "\n\nInput three characters: ";
   cin >> char1 >> char2 >> char3;

   cout << "The maximum character value is: "
      << maximum( char1, char2, char3 ) << endl;
      
   const int aCount = 5; 
   const int bCount = 7; 
   const int cCount = 6; 

   int a[ aCount ] = { 1, 2, 3, 4, 5 };
   double b[ bCount ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
   char c[ cCount ] = "HELLO"; 

   printArray( a, aCount );
   printArray( b, bCount );   
   printArray( c, cCount );   
} 

