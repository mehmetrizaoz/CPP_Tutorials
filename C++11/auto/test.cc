#include<iostream>
#include <vector> 
#include <map>
  
using namespace std;

auto meaningOfLife()
{
   return 42;
}

template<typename T, typename U>
auto add (T t, U u)
{
   return t+u;
}
 
int main(){
    cout << meaningOfLife() << endl;
    cout << add(3, 4.5) << endl;
    cout << add(string("ali"), string(" oz")) << endl;    

    vector<double> values;
    typedef decltype(values.begin()) dvi; //double vector iterator    
    typedef decltype(42) myint;
    typedef decltype(add(3, 4.5)) qtype;
    
    vector< int > v = { 1, 2, 3, 4, 5, 6 };    
    //vector< int >::const_iterator iter;     
    for (auto iter = v.begin(); iter!= v.end(); ++iter )
       cout << *iter << ' ';            
    cout << endl;
   
    auto no = 45;  // int
    auto name = "Marco Van Basten"; // std::string
    auto wage = 12.34;  // double

    cout << no << " " << name << " " << wage << endl;

    auto d = {1,2,3}; //list
    map<string, vector<double>> ticks;
    //map<string, vector<double>>::iterator it = ticks.begin();
    auto it = ticks.begin();    
    
    return 0;
}
