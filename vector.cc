/*
use contiguous storage locations for their elements
their elements can also be accessed using offsets on regular pointers
their size can change automatically by the container.
*/
#include <iostream>
#include <vector> 

using namespace std;

void printVector( const vector< int > &v ){
   vector< int >::const_iterator cnstIter; 

   for ( cnstIter = v.begin(); cnstIter != v.end(); ++cnstIter )
      cout << *cnstIter << ' ';
   cout << endl;
} 

int main(){
   const int SIZE = 6;
   int array[ SIZE ] = { 1, 2, 3, 4, 5, 6 };
   vector< int > v;
   v.push_back( 2 );  
   v.push_back( 3 );  
   v.push_back( 4 );
   v.push_back( 1 );   

   cout << "size " << v.size() << endl;
   cout << "capacity " << v.capacity() << endl;  
   cout << "1st element " << v.front() << endl;
   cout << "Last element " << v.back() << endl;
   printVector( v );
         
   v[ 1 ] = 7;
   v.at( 2 ) = 10;
   v.insert( v.begin() + 1, 22 );
   v.erase( v.begin() );   
   printVector( v );

   vector< int >::const_reverse_iterator revIter; 
   for ( revIter = v.rbegin(); revIter!= v.rend(); ++revIter )
      cout << *revIter << ' ';            
   cout << endl;
      
   v.clear();
   cout << "is empty " << v.empty() << endl;
   
   v.insert( v.begin(), array, array + SIZE );
   printVector( v );
} 


