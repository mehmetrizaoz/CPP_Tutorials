#include <bits/stdc++.h> 
#include <cassert>

using namespace std; 
  
[[noreturn]] void ownAssertFailureHandler(std::string message) {
    cerr << message << endl;
    terminate();
}

template<class InconsistencyHandler>
double fortyTwoDivideBy(int i) {
    if (i == 0)
         i = InconsistencyHandler::correct(i);
    return 42. / i;
};

struct InconsistencyChangeToOne {
    static int correct(int i) { return 1; }
};

struct InconsistencyThrower {
    static [[noreturn]] int correct(int i){ 
       ownAssertFailureHandler("Unknown inconsistency"s); 
    }
};

int main()  
{ 
    double fortyTwo = fortyTwoDivideBy<InconsistencyChangeToOne>(0);
    double unreachable = fortyTwoDivideBy<InconsistencyThrower>(0);
    // unreachable:
    cout << "No! That's impossible" << endl;     
} 
