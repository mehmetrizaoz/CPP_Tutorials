#include <iostream>
#include <vector>

using namespace std;

#include <vector>
int main()
{
  const std::vector<int> v(1);
  auto a = v[0];        // a has type int
  decltype(v[0]) b = 1; // b has type const int&, the return type of
                          //   std::vector<int>::operator[](size_type) const
  auto c = 0;           // c has type int
  auto d = c;           // d has type int
  decltype(c) e;        // e has type int, the type of the entity named by c
  decltype((c)) f = c;  // f has type int&, because (c) is an lvalue
  decltype(0) g;        // g has type int, because 0 is an rvalue
}


