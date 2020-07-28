#include <iostream>
#include <map> 

using namespace std;

int main()
{
   map< int, double> pairs;

   pairs.insert( map< int, double>::value_type( 15, 2.7 ) );
   pairs.insert( map< int, double>::value_type( 30, 111.11 ) );
   pairs.insert( map< int, double>::value_type( 5, 1010.1 ) );
   pairs.insert( map< int, double>::value_type( 10, 22.22 ) );
   pairs.insert( map< int, double>::value_type( 25, 33.333 ) );
   pairs.insert( map< int, double>::value_type( 5, 77.54 ) ); // dup ignored
   pairs.insert( map< int, double>::value_type( 20, 9.345 ) );
   pairs.insert( map< int, double>::value_type( 15, 99.3 ) ); // dup ignored

   cout << "pairs contains:\nKey\tValue\n";
   
   for ( map< int, double>::const_iterator iter = pairs.begin();        
      iter != pairs.end(); ++iter )                       
      cout << iter->first << '\t' << iter->second << '\n';

   pairs[ 25 ] = 9999.99;
   pairs[ 40 ] = 8765.43;
   
   cout << "\nAfter subscript operations, pairs contains:\nKey\tValue\n";
   
   for ( map< int, double>::const_iterator iter2 = pairs.begin();
      iter2 != pairs.end(); ++iter2 )           
      cout << iter2->first << '\t' << iter2->second << '\n';
                          
   cout << endl;
} 
