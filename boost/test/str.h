#ifndef _MYSTRING
#define _MYSTRING
 
class mystring { 
  char* buffer; 
  int length;
  int p1;
  int p2;
  
  public: 
    int add(){return p1 + p2;}
    void set_p1(int i){p1 = i;}
    void set_p2(int i){p2 = i;}
    
    void setbuffer(char* s) { buffer = s; length = strlen(s); } 
    char& operator[ ] (const int index) { return buffer[index]; }
    int size( ) { return length; }
 }; 
 
#endif
