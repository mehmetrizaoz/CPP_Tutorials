/*
[ capture list ] (parameters) -> return-type  
{method definition} 

[ ](){} 	no captures
[=](){} 	captures everything by copy (not recommendded)
[&](){} 	captures everything by reference (not recommendded)
[x](){} 	captures x by copy
[&x](){} 	captures x by reference
[&, x](){} 	captures x by copy, everything else by reference
[=, &x](){} 	captures x by reference, everything else by copy
*/
#include <bits/stdc++.h> 
using namespace std; 

//-------------------------
class OddCounter{
   int mCounter = 0;
public:
   int getCount(){
       return mCounter;
   }
   void update(vector<int> & vec){
      for_each(vec.begin(), vec.end(), [this](int element){
         if(element % 2 == 0)
            mCounter++;
      });
   }     
};
//-------------------------
void foo() { cout << "foo()\n"; }
void bar() { cout << "bar()\n"; }
//-------------------------
void mylog() {cout << "hhh";}
//-------------------------
template <typename T, typename... Args>
void mylog(T first, Args ... args){
   cout << first << " ";
   mylog(args...);
}
//-------------------------

int main() { 
   vector<int> v {4, 1, 3, 5, 2, 3, 1, 7}; 
   for_each(v.begin(), v.end(), [](int e){cout << e << " ";});   
   cout << endl;
//-------------------------   
   int sum = 0;
   for_each(v.begin(), v.end(), [&sum](int i){sum += i;});
   cout<<"sum: "<<sum<<endl;
//-------------------------
   for_each(v.begin(),v.end(),[](int v){static int n = 1; v=n++;cout << v << " ";});
   cout << endl;
//-------------------------
   int x = 100, y = 200;
   auto p = [&](){cout << __PRETTY_FUNCTION__ <<" : "<<sum<<","<<y<<endl;};
   p();   
//-------------------------
   auto f  = []() {
      foo();
      bar();
   };
   f();
//-------------------------   
   auto g = [](int a, int b)->int{ return a*b; };
   cout << g(4, 5) << endl;
//-------------------------      
   cout << [](int a, int b)->int {return a*b;}(4, 5) << endl;  
//-------------------------      
   cout << [](int n)->int {return n*n;}(5) << endl;      
//-------------------------        
   int zero = 0; 
   auto is_positive = [&](int n) { return n > zero; };
   bool s = is_positive(-2);
   cout << boolalpha << "nnnnnnnnnnnn" << is_positive(-2) << endl;
//-------------------------        	
   auto k = [&sum](int a, int b){ sum = a*b; };
   k(5,7);
   cout << sum << endl;  
//-------------------------
   vector<int> vec = {12,3,2,1,8,9,0,2,3,9,7};
   OddCounter counterObj;
   counterObj.update(vec);
   int count = counterObj.getCount();
   cout<<"Counter = "<<count<<endl;
//-------------------------       
   cout<<count_if(vec.begin(),vec.end(),[](int x)->int{return x>5;})<<endl;
//-------------------------
//generic lambda
   auto ff = [](auto a, auto b){return a*b;};
   cout<<ff(7,6)<<endl;
   cout<<ff(1.1, 2.0)<<endl;
//-------------------------   
   auto variadic_generic_lambda = [](auto... param) {
      mylog(param...);
   };
   variadic_generic_lambda(1, "lol", 1.1);
   cout<<endl;
   variadic_generic_lambda(1, 2.2, 1.1, "mehmet", 77);   
   cout<<endl;
//-------------------------   
   function<int(int)> fib = [&fib](int x){ return x < 2 ? 1 : fib(x-2) + fib(x-1); };
   auto fib8 = fib(8);
   cout << fib8 << endl;
} 




