#include <iostream>

using namespace std;

template < typename T >
T maximum( T value1, T value2, T value3 )
{
   T maximumValue = value1; 

   if ( value2 > maximumValue )
      maximumValue = value2;

   if ( value3 > maximumValue )
      maximumValue = value3;

   return maximumValue;
}

template < typename T >
void printArray ( const T * const array, int count ){
   for( int i=0; i<count; ++i)
      cout << array[i] << " ";
   cout << endl;
}

