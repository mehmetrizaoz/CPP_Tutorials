#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

class Strategy;

class TestBed{
  public:
    TestBed(){
        myStrategy = NULL;
    }
    void setBehavior(int type);
    void performBehavior();
  private:
    Strategy *myStrategy;
};

class Strategy{
  public:
    void perform(){
       behavior();
    }
  private:
    virtual void behavior() = 0;
};

class behaviorOne: public Strategy{
  private:
    void behavior(){
        cout << "left strategy" << endl;
    }
};

class behaviorTwo: public Strategy{
  private:
    void behavior(){
        cout << "right strategy" << endl;
    }
};

class behaviorThree: public Strategy{
  private:
    void behavior(){
        cout << "center strategy" << endl;
    }
};

void TestBed::performBehavior(){
   myStrategy->perform();
}


void TestBed::setBehavior(int type){  
  delete myStrategy;
  if (type == 0)
    myStrategy = new behaviorOne();
  else if (type == 1)
    myStrategy = new behaviorTwo();
  else if (type == 2)
    myStrategy = new behaviorThree();
}

int main(){
  TestBed test;
  int answer;  
  while(1){
     cout << "Exit(other) Left(0) Right(1) Center(2): ";
     cin >> answer;
     if(answer > 2) break;
     test.setBehavior(answer);
     test.performBehavior();
  }   
  return 0;
}


