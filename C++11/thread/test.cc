#include <chrono>
#include <iostream>
#include <thread>

using namespace std; 

void foo(){
  cout << "foo enter" << endl;
  for (int i=0; i<5; i++){
     cout << endl <<"mmhhhhhhhhh" << endl;
     this_thread::sleep_for(chrono::seconds(1));
  }
  cout << "foo exit" << endl;
}

void bar(int x){
  cout << "bar enter" << endl;
  this_thread::sleep_for(chrono::milliseconds(7000));
  cout << "bar exit" << endl;
}


int main(){
  thread first (foo);     
  thread second (bar, 0); 
  thread third (bar, 1); 
  thread fifth (bar, 0);     
  
  cout<< this_thread::get_id() << endl;
  cout << "main, foo, bar execute concurrently" << endl;
  cout << "Number of threads =" << thread::hardware_concurrency() << endl;  
    
  first.detach();  
  
  if (first.joinable()){
     cout << "first join" << endl;
     first.join();
  }
  if (second.joinable()){
     cout << "second join" << endl;  
     second.join();  
  }
  
  cout << "foo and bar completed.\n";
  return 0;
}




