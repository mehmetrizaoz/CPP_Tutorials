#include <iostream>
#include <vector> 

using namespace std;

void printVector( const vector< int > &v ){
   vector< int >::const_iterator cnstIter; 

   for ( cnstIter = v.begin(); cnstIter != v.end(); ++cnstIter )
      cout << *cnstIter << ' ';
} 

int main(){
   vector< int > v;
   v.push_back( 2 );  
   v.push_back( 3 );  
   v.push_back( 4 );

   cout << v.size() << endl << v.capacity() << endl;
   printVector( v );

   vector< int >::const_reverse_iterator revIter; 
   cout << endl;

   for ( revIter = v.rbegin(); revIter!= v.rend(); ++revIter )
      cout << *revIter << ' ';            

   cout << endl;
} 


