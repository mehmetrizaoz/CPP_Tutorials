#include <chrono>
#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>

using namespace std; 

void foo(){
  cout << "foo enter" << endl;
  for (int i=0; i<5; i++){
     cout << endl <<"--------" << endl;
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
  thread fourth (bar, 0);     
  
  cout<< this_thread::get_id() << endl;
  cout << "main, foo, bar execute concurrently" << endl;
  cout << "Number of threads =" << thread::hardware_concurrency() << endl;  
    
  first.detach();  
//-------------------------
  thread t([](){
     cout << "thread function\n";
  });
  t.join();
//-------------------------  
  if (first.joinable()){
     cout << "first join" << endl;
     first.join();
  }
  if (second.joinable()){
     cout << "second join" << endl;  
     second.join(); 
     third.join();
     fourth.join(); 
  }
//-------------------------
  vector<thread> workers;
  for (int i = 0; i < 5; i++){
     workers.push_back(std::thread([](){
     cout << "thread function\n";
     }));
  }  
  for_each(workers.begin(), workers.end(), [](std::thread &t){
     t.join();
  });  
  
  
  cout << "foo and bar completed.\n";
  return 0;
}




