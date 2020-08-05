#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

class Strategy;

class TestBed{
  public:
    TestBed(){
        behavior = NULL;
    }
    void setStrategy(int type);
    Strategy *behavior;
};

class Strategy{
  public:
    void perform(){
       behavior();
    }
  private:
    virtual void behavior() = 0;
};

class LeftStrategy: public Strategy{
  private:
    void behavior(){
        cout << "left strategy" << endl;
    }
};

class RightStrategy: public Strategy{
  private:
    void behavior(){
        cout << "right strategy" << endl;
    }
};

class CenterStrategy: public Strategy{
  private:
    void behavior(){
        cout << "center strategy" << endl;
    }
};

void TestBed::setStrategy(int type){  
  delete behavior;
  if (type == 0)
    behavior = new LeftStrategy();
  else if (type == 1)
    behavior = new RightStrategy();
  else if (type == 2)
    behavior = new CenterStrategy();
}

int main(){
  TestBed test;
  int answer;  
  while(1){
     cout << "Exit(other) Left(0) Right(1) Center(2): ";
     cin >> answer;
     if(answer > 2) break;
     test.setStrategy(answer);
     test.behavior->perform();
  }   
  return 0;
}


