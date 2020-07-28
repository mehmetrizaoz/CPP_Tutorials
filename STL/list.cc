#include <iostream>
#include <list> 
#include <algorithm>

using namespace std;

void printList( const list< int > &l ){
   list< int >::const_iterator cnstIter; 

   for ( cnstIter = l.begin(); cnstIter != l.end(); ++cnstIter )
      cout << *cnstIter << ' ';
      
   cout << endl;
} 

int main(){ 
   const int SIZE = 4;
   int array[ SIZE ] = { 2, 6, 4, 8 };
   list< int > v, v2; 

   v.push_front( 1 );
   v.push_front( 2 );
   v.push_back( 4 );
   v.push_back( 3 );    
   
   v2.insert( v2.begin(), array, array + SIZE );
   
   v2.sort();
   v.sort();   
   
   v.merge( v2 );                         
   printList( v );

   v2.insert( v2.begin(), array, array + SIZE );

   v.splice( v.end(), v2 );
   printList( v );
   
   v.pop_front();
   v.pop_back();
   printList( v );

   v.unique();
   printList( v );
   
   v.swap( v2 );
   printList( v2 );

   v.assign( v2.begin(), v2.end() );
   printList( v );

   v.remove( 4 );
   printList( v );
} 
