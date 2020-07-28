#include <iostream>
#include <set>
#include <algorithm>
#include <iterator> 

using namespace std;

void printVector( const set< double > &v ){
   set< double >::const_iterator cnstIter; 

   for ( cnstIter = v.begin(); cnstIter != v.end(); ++cnstIter )
      cout << *cnstIter << ' ';
   cout << endl;
} 

int main(){
   const int SIZE = 5;
   double a[ SIZE ] = { 2.1, 4.2, 9.5, 2.1, 3.7 };   
   set< double >  doubleSet( a, a + SIZE );

   printVector(doubleSet);  
    
   pair< set< double > ::const_iterator, bool > p;
   p = doubleSet.insert( 13.8 ); 
   cout << *( p.first ) << ( p.second ? " was" : " was not" ) << " inserted" << endl;
   printVector(doubleSet);
   
   p = doubleSet.insert( 9.5 ); 
   cout << *( p.first ) << ( p.second ? " was" : " was not" ) << " inserted" << endl;
   printVector(doubleSet);
} 



