#include<iostream>
using namespace std ;

int main(){
    int num = (rand()%(10-1+1))+1;
    int x ;
    cout<<"Choose a number between 1-100: ";
    cin>>x;
    if(x==num){
        cout<<"Your are lucky";
    }else{
        cout<<"not lucky";
    }


    return 0;
}