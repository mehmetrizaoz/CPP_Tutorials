#include <iostream>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
#include <memory>
#include <type_traits>
#include <initializer_list>
  
using namespace std;

template < typename T >
T add(const T arg){
  return arg;
}

template < typename T, typename... ARGS >
T add(const T arg, const ARGS... args){
  return arg + add(args...);
}

auto sum(){return 0;}

template < typename H, typename... T >
auto sum (H h, T... t)
{
   return h + sum(t...);
}

//-----------------------------------

void log(){
}

//-----------------------------------
auto sum_product(double a, double b)
{
	return make_pair(a+b, a*b);
}
//-----------------------------------

template<typename T, typename ... Args>
void log(T first, Args ... args) {
  cout<<first<<" ";
  log(args ...);
}

int main(){
  cout << add(1, 2, 3, 4, 5, 6) << endl;
  cout << add(1.1, 2.4, 3.4, 5.6) << endl;  
  
  cout << sum(1, 2.4, 5, 7) << endl;
  
  log(2, 3.4, "aaa"); cout << endl;

  //auto values = sum_product(3,4);
  //auto s = get<0>(values);  
  float s;
  tie(s, ignore) = sum_product(3,4);
  cout << "sum = " << s << endl;  
  
  return 0;
}



