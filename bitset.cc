#include <iostream>
#include <string> 
#include <bitset>

using namespace std;

int main (){
  bitset<4> foo (std::string("0001"));
  
  cout << foo.flip(3) << endl;
  cout << foo.flip() << endl;  
  
  cout << endl << foo.set() << endl;       
  cout << foo.set(2,0) << endl;    
  cout << foo.set(2) << endl;      


  bitset<5> foo2 (std::string("01011"));
  cout << endl << boolalpha;
  for (size_t i=0; i<foo2.size(); ++i)
      cout << foo2.test(i) << endl;    
    
  bitset<4> foo3 (string("1011"));
  cout << endl << foo3.reset(1) << endl; 
  cout << foo3.reset() << endl;  
  return 0;
}
