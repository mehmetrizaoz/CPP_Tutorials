/*
In a multiset, the value of an element also identifies it
The value of the elements in a multiset cannot be modified once in the container
but they can be inserted or removed from the container.

Internally, the elements in a multiset are always sorted following a specific strict 
weak ordering criterion indicated by its internal comparison object.
*/

#include <iostream>
#include <set> 
#include <iterator>

using namespace std;

void printMultiset( multiset <int> &m){
   multiset <int>::const_iterator cnstIter;
   for(cnstIter=m.begin(); cnstIter!=m.end(); cnstIter++)
      cout << *cnstIter << " ";
   cout << endl;
}

int main(){
   const int SIZE = 10;
   int a[ SIZE ] = { 7, 22, 9, 1, 18, 30, 100, 22, 85, 13 };
   multiset< int > intMultiset;

   cout << "count " << intMultiset.count( 15 ) << endl;   
   intMultiset.insert( 15 );
   intMultiset.insert( 15 );
   cout << "count " << intMultiset.count( 15 ) << endl;

   if ( intMultiset.find( 15 ) != intMultiset.end() )
      cout << "Found value 15\n";   

   if ( intMultiset.find( 15 ) == intMultiset.end() )
      cout << "Did not find value 20" << endl;

   intMultiset.insert( a, a + SIZE ); 
   printMultiset(intMultiset);
   cout << "Lower bound of 22: " << *( intMultiset.lower_bound( 22 ) ) << endl;
   cout << "Upper bound of 22: " << *( intMultiset.upper_bound( 22 ) ) << endl;

   pair< multiset< int >::const_iterator, multiset< int >::const_iterator > p;
   p = intMultiset.equal_range( 22 );
   cout << "Lower bound of 22: " << *( p.first ) << endl;
   cout << "Upper bound of 22: " << *( p.second ) << endl;
} 


