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
    
   printList( v );

   v.sort();
   printList( v );
  
   v2.insert( v2.begin(), array, array + SIZE );
   cout << "insert: ";      
   printList( v2 );

   v.splice( v.end(), v2 );
   cout << "splice: ";   
   printList( v );

   v2.insert( v2.begin(), array, array + SIZE );
   v2.sort();
   cout << "sort: ";
   printList( v2 );
   
   v.merge( v2 );                         
   cout << "merge: ";
   printList( v );

   v.pop_front();
   v.pop_back();
   printList( v );

   v.unique();
   cout << "unique: ";
   printList( v );
   
   v.swap( v2 );
   printList( v );

   v.assign( v2.begin(), v2.end() );
   printList( v );

   v.merge( v2 ); 
   printList( v );
   
   v.remove( 4 );
   printList( v );
   cout << endl;
} 
