#include<iostream>
using namespace std ;

void swap(int *a , int *b){

    cout<<*a<<" "<<*b<<" "<<endl;

    int temp = *a;
    *a = *b;
    *b = temp ;

    cout<<*a<<" "<<*b<<" " ;
}

int main(){
    int x ;
    cin>>x;
    int y;
    cin>>y;

    swap( &x, &y) ;
}