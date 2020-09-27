#include<iostream>
#include <vector> 
#include <map>
  
using namespace std;

template <typename T, size_t Size>
class Values{
	static_assert(Size > 1, "Use a scalar");
	T values[Size];
};

template <typename T, typename U>
auto add(T t, U u) -> decltype(t+u){
	static_assert(is_integral<T>::value, "First value must be integer");
	return t+u;
}

int main(){
   Values<int, 4> stuff;
   Values<short, 4> stuff2;
   auto qq = add(2, 3);

}
