#include <iostream>

using namespace std;

template < typename T >
T add(const T arg){
  return arg;
}

template < typename T, typename... ARGS >
T add(const T arg, const ARGS... args){
  return arg + add(args...);
}

//-----------------------------------

void log(){
}

template<typename T, typename ... Args>
void log(T first, Args ... args) {
    std::cout<<first<<" ";
    log(args ...);
}

int main(){
  cout << add(1, 2, 3, 4, 5, 6) << endl;
  cout << add(1.1, 2.4, 3.4, 5.6) << endl;  
  
  log(2, 3.4, "aaa"); cout << endl;
  return 0;
}
