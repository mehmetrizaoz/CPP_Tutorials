#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

void printVector( deque< double > &d ){
   deque< double >::const_iterator cnstIter; 

   for ( cnstIter = d.begin(); cnstIter != d.end(); ++cnstIter )
      cout << *cnstIter << ' ';
   cout << endl;
} 

int main(){
   deque< double > d;

   d.push_front( 2.2 );
   d.push_front( 3.5 );
   d.push_back( 1.1 );

   printVector(d);

   d.pop_front();
   printVector(d);

   d[ 1 ] = 5.4;
   printVector(d);

}
