#include "header.h"

struct Address {
    string addr;
};

struct Person{
   string name;
   int age;
   Address address;    
   Person(Address address) : address(address){ }     
   Person(const string &name, int age) : name(name), age(age) { }
};

struct PersonFactory{
  static Person make_person(string name, int age){
      return {name, age};
  }
};

struct Exchange{
    int count;
    float rates[2];

    // this won't work
    //Exchange(initializer_list<float> r) : rates(r) {}

    Exchange(initializer_list<float> r){
        if (r.size() < 2) return;
        auto i = r.begin(); // ---> segway into next segment
        rates[0] = *i;
        i++;
        rates[1] = *i;
    }
};

int main(){
    int a = 4;
    int n{4};
//  shouldn't work
//  int m{3.5};
    string s{"foo"};

    vector<int> values{1,2,3}; // = optional, instead of
//  values.push_back(1);
//  values.push_back(1);
//  values.push_back(1);

    array<float,3> coeff{0.1,0.2,0.3};          
    vector<int> what_is_this{123};

    map<string,string> capitals = {
       {"UK", "London"},
       {"France", "Paris"}
    };

    //not the built-in type
    Person p2{"Dmitri", 500};    
    
    auto p = PersonFactory::make_person("Dmitri", 500);
    cout << p.name << " " << p.age  << endl;

    Address myAddress{"izmir"};   
    Person person{myAddress};
    cout << person.address.addr << endl;
    auto z = person.address;
    cout << z.addr << endl;

    Exchange e{1,2,3};    
        
    Exchange b{1.1, 2.2};
    cout << b.rates[0] << " " << b.rates[1] << endl;
    return 0;
}


