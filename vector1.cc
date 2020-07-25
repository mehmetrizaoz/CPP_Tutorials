#include <iostream>
#include <vector> 

using namespace std;

void printVector( const vector< int > &v ){
   vector< int >::const_iterator constIterator; 

   for ( constIterator = v.begin(); 
      constIterator != v.end(); ++constIterator )
      cout << *constIterator << ' ';
} 

int main(){
   vector< int > v;
   v.push_back( 2 );  
   v.push_back( 3 );  
   v.push_back( 4 );

   cout << v.size() << "\n" << v.capacity() << "\n";
   printVector( v );

   vector< int >::const_reverse_iterator reverseIterator; 
   vector< int >::const_reverse_iterator tempIterator = v.rend();
   cout << endl;

   for ( reverseIterator = v.rbegin();               
      reverseIterator!= tempIterator; ++reverseIterator )
      cout << *reverseIterator << ' ';            

   cout << endl;
} 


