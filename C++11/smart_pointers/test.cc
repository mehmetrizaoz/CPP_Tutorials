#include <bits/stdc++.h>
  
using namespace std;

class Rectangle { 
    int length; 
    int breadth; 
  
public: 
    Rectangle(int l, int b) 
    { 
        length = l; 
        breadth = b; 
    } 
  
    int area() 
    { 
        return length * breadth; 
    } 
}; 

int main(){    
    int amtToStore;
    cout << "How many numbers do you want to store : ";
    cin >> amtToStore;

    // int * pNums;    
    //pNums = (int *) malloc(amtToStore * sizeof(int));
    
    unique_ptr<int[]> pNums = make_unique<int[]>(amtToStore); //unique_ptr<int[]> pNums(new int[amtToStore]);    
    
    if(pNums != NULL){
        int i = 0;        
        while(i < amtToStore){
            cout << "Enter a Number : ";
            cin >> pNums[i];
            i++;
        }
    }
    
    cout << "You entered these numbers\n";
    for(int i = 0; i < amtToStore; i++){
        cout << pNums[i] << "\n";
    }
    cout << endl;
    //delete pNums;
//---------------------------------------------
//    unique_ptr<Rectangle> P1(new Rectangle(10, 5));
    unique_ptr<Rectangle> P1 = make_unique<Rectangle>(10,5) ;
    cout << P1->area() << endl; // This'll print 50 
  
    // unique_ptr<Rectangle> P2(P1); 
  
    unique_ptr<Rectangle> P2; 
    P2 = move(P1); 
  
    // This'll print 50 
    cout << P2->area() << endl; 
  
    // cout<<P1->area()<<endl;     
    
    
    return 0;
}


