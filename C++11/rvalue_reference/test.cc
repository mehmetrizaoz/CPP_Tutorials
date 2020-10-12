#include <iostream>
#include <vector>

using namespace std;

class Holder
{
public:
    Holder(int size)
    {
      m_data = new int[size];
      m_size = size;
        cout << "constructor" << endl;
    }

    Holder(const Holder& other){
      m_data = new int[other.m_size];
      copy(other.m_data, other.m_data + other.m_size, m_data);
      m_size = other.m_size;
      cout << "copy constructor" << endl;
    }

    Holder& operator=(const Holder& other){
      if(this == &other) 
          return *this;
      delete[] m_data;
      m_data = new int[other.m_size];
      copy(other.m_data, other.m_data + other.m_size, m_data);
      m_size = other.m_size;
      cout << "assignment" << endl;
      return *this;
    }

    Holder(Holder&& other)     // <-- rvalue reference in input
    {
      m_data = other.m_data;
      m_size = other.m_size;
      other.m_data = nullptr;
      other.m_size = 0;
      cout << "move constructor" << endl;
    }

    Holder& operator=(Holder&& other)
    {  
      if (this == &other) 
          return *this;
      delete[] m_data;
      m_data = other.m_data;
      m_size = other.m_size;
      other.m_data = nullptr;
      other.m_size = 0;
      cout << "assignment 2" << endl;
      return *this;
    }

    ~Holder(){
      delete[] m_data;
    }
//private:
    int*   m_data;
    size_t m_size;
};


Holder createHolder(int size){
  return Holder(size);
}


int main()
{ 
  Holder h1(1000);// regular constructor
  cout << h1.m_size << endl;
  
  Holder h2(h1);  // copy constructor (lvalue in input)
  cout << h1.m_size << endl;
  cout << h2.m_size << endl;    
  
  Holder h3(move(h1)); // move constructor (rvalue in input)
  cout << h1.m_size << endl;
  cout << h3.m_size << endl;    
  
  h2 = h3; // assignment operator (lvalue in input)
  cout << h2.m_size << endl;
  cout << h3.m_size << endl;  
    
  h2 = createHolder(500);// move assignment operator (rvalue in input)
  cout << h2.m_size << endl;
  return 0;
}



