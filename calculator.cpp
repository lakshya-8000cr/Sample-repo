#include<iostream>
using namespace std ; 

int main(){
    char ope;
    int a , b ;
    cin >>a >> b ;
    cin >> ope;

    switch(ope){
        case '*': 
        cout<< a * b ;
        break ;
        case '+': 
        cout<<a + b ;
        break ;
        case '-': 
        cout<<a - b ;
        break ;
        case '/': 
        cout<<a / b ;
        break ;

        if(a==0||b==0){
            cout<<"invalid value";
        }
        break;
    }
}