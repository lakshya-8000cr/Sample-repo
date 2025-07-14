// Implement a Counter class with an increment() and decrement() method and a method to display the current count.

#include<iostream>
using namespace std ;

class Counter {
    public :
    int a;

    Counter(int a){
        this->a = a;
    }

    void Increment(){
        a++;
        cout<<"Increment: "<<a;
    }

    void Decrement(){
        a--;
        cout<<"Decrement: "<<a;
    }

    ~Counter(){};

};


int main(){
    int a;
    cin>>a ;

    Counter R(a);
    R.Increment();
    R.Decrement();

    return 0;
}