#include<iostream>
using namespace std ;

int main(){
    int x ;
    cin >> x;

    if(x>0){
        cout<<"Positive number";
    }else if(x<0){
        cout<<"Negative number";
    }else{
        cout<<"Zero";
    }
}