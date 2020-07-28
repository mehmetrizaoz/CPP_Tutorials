#include <iostream>
#include <stack>
#include <vector>
#include <list>

using namespace std;


template< typename T > void pushElements( T &stackRef )
{
   for ( int i = 0; i < 10; ++i )
   {
      stackRef.push( i );
      cout << stackRef.top() << ' '; 
   } 
}

template< typename T > void popElements( T &stackRef )
{
   while ( !stackRef.empty() ) 
   {
      cout << stackRef.top() << ' ';
      stackRef.pop(); 
   }

} 
int main()
{
   stack< int > intDequeStack;   
   stack< int, vector< int > > intVectorStack;
   stack< int, list< int > > intListStack;

   cout << "Pushing onto intDequeStack: ";
   pushElements( intDequeStack );
   cout << "\nPushing onto intVectorStack: ";
   pushElements( intVectorStack );
   cout << "\nPushing onto intListStack: ";
   pushElements( intListStack );
   cout << endl << endl;

   cout << "Popping from intDequeStack: ";
   popElements( intDequeStack );
   cout << "\nPopping from intVectorStack: ";
   popElements( intVectorStack );
   cout << "\nPopping from intListStack: ";
   popElements( intListStack );
   cout << endl;
}

