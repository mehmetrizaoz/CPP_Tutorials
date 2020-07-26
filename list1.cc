#include <iostream>
#include <list> 
#include <algorithm>
#include <iterator> 
using namespace std;

void printList( const list< int > &listRef )
{
    ostream_iterator< int > output( cout, " " );
    copy( listRef.begin(), listRef.end(), output );
} 

int main()
{ 
   const int SIZE = 4;
   int array[ SIZE ] = { 2, 6, 4, 8 };
   list< int > values; // create list of ints
   list< int > otherValues; // create list of ints

   // insert items in values
   values.push_front( 1 );
   values.push_front( 2 );
   values.push_back( 4 );
   values.push_back( 3 );
   
   cout << "values contains: ";
   printList( values );

   values.sort(); // sort values
   cout << "\nvalues after sorting contains: ";
   printList( values );
  
   // insert elements of array into otherValues                   
   otherValues.insert( otherValues.begin(), array, array + SIZE );
   cout << "\nAfter insert, otherValues contains: ";
   printList( otherValues );

   values.splice( values.end(), otherValues );
   cout << "\nAfter splice, values contains: ";
   printList( values );

   values.sort(); // sort values
   cout << "\nAfter sort, values contains: ";
   printList( values );

   otherValues.insert( otherValues.begin(), array, array + SIZE );
   otherValues.sort();                         
   cout << "\nAfter insert and sort, otherValues contains: ";
   printList( otherValues );
   
   // remove otherValues elements and insert into values in sorted order
   values.merge( otherValues );                         
   cout << "\nAfter merge:\n   values contains: ";
   printList( values );
   cout << "\n   otherValues contains: ";
   printList( otherValues );

   values.pop_front(); // remove element from front
   values.pop_back(); // remove element from back
   cout << "\nAfter pop_front and pop_back:\n   values contains: ";
   printList( values );

   values.unique(); // remove duplicate elements
   cout << "\nAfter unique, values contains: ";
   printList( values );

   values.swap( otherValues );
   cout << "\nAfter swap:\n   values contains: ";
   printList( values );
   cout << "\n   otherValues contains: ";
   printList( otherValues );

   values.assign( otherValues.begin(), otherValues.end() );
   cout << "\nAfter assign, values contains: ";
   printList( values );

   values.merge( otherValues ); 
   cout << "\nAfter merge, values contains: ";
   printList( values ); 
   
   values.remove( 4 ); // remove all 4s
   cout << "\nAfter remove( 4 ), values contains: ";
   printList( values );
   cout << endl;
} 
