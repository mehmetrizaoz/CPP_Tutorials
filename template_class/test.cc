#include <iostream>
#include "maximum.h" 

using namespace std;

template <class T> 
class calc{
public:
   T multiply(T x, T y);
   T add(T x, T y);
};

template <class T> 
T calc<T>::multiply(T x,T y){
   return x*y;
}

template <class T> 
T calc<T>::add(T x, T y){
   return x+y;
}

int main(){
   calc <int> c;
   cout << c.multiply(5, 6) << endl;
   cout << c.add(5, 6) << endl;   

   calc <double> d;
   cout << d.multiply(5.2, 2.0) << endl;
   cout << d.add(5.1, 6.2) << endl;   
} 

