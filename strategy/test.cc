#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

class Strategy;

class TestBed
{
  public:
    enum StrategyType
    {
        Dummy, Left, Right, Center
    };
    TestBed()
    {
        strategy_ = NULL;
    }
    void setStrategy(int type);
    void doIt();
  private:
    Strategy *strategy_;
};

class Strategy
{
  public:
    Strategy(){}
    void format()
    {
       justify();
    }

  private:
    virtual void justify() = 0;
};

class LeftStrategy: public Strategy
{
  public:
    LeftStrategy(): Strategy(){}
  private:
     /* virtual */void justify()
    {
        cout << "left strategy" << endl;
    }
};

class RightStrategy: public Strategy
{
  public:
    RightStrategy(): Strategy(){}
  private:
     /* virtual */void justify()
    {
        cout << "right strategy" << endl;
    }
};

class CenterStrategy: public Strategy
{
  public:
    CenterStrategy(): Strategy(){}
  private:
     /* virtual */void justify()
    {
        cout << "center strategy" << endl;
    }
};

void TestBed::setStrategy(int type)
{
  delete strategy_;
  if (type == Left)
    strategy_ = new LeftStrategy();
  else if (type == Right)
    strategy_ = new RightStrategy();
  else if (type == Center)
    strategy_ = new CenterStrategy();
}

void TestBed::doIt(){
  strategy_->format();
}

int main()
{
  TestBed test;
  int answer;
  cout << "Exit(0) Left(1) Right(2) Center(3): ";
  cin >> answer;
  while (answer)
  {
    test.setStrategy(answer);
    test.doIt();
    cout << "Exit(0) Left(1) Right(2) Center(3): ";
    cin >> answer;
  }
  return 0;
}


