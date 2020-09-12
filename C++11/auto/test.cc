#include<iostream>
#include <vector> 

using namespace std;
 
int main(){
    vector< int > v = { 1, 2, 3, 4, 5, 6 };
    
    //vector< int >::const_iterator iter; 
    
    for (auto iter = v.begin(); iter!= v.end(); ++iter )
       cout << *iter << ' ';            
    cout << endl;
   
    auto no = 45;  // int
    auto name = "Marco Van Basten"; // std::string
    auto wage = 12.34;  // double

    cout << no << " " << name << " " << wage << endl;

    return 0;
}
