#include <iostream>
#include <map>

using namespace std;

int main()
{
   multimap< int, double > pairs; 

   cout << "count of 15's " << pairs.count( 15 ) << endl;
   pairs.insert( multimap< int, double >::value_type( 15, 2.7 ) );
   pairs.insert( multimap< int, double >::value_type( 15, 99.3 ) );
   cout << "count of 15's " << pairs.count( 15 ) << endl;
   
   pairs.insert( multimap< int, double >::value_type( 30, 111.11 ) );
   pairs.insert( multimap< int, double >::value_type( 10, 22.22 ) );
   pairs.insert( multimap< int, double >::value_type( 25, 33.333 ) );
   pairs.insert( multimap< int, double >::value_type( 20, 9.345 ) );
   pairs.insert( multimap< int, double >::value_type( 5, 77.54 ) );
   
   for ( multimap< int, double >::const_iterator iter = pairs.begin(); iter != pairs.end(); ++iter )
      cout << iter->first << '\t' << iter->second << '\n';
} 


