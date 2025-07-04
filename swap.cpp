//using 3rd varibale
#include<iostream>
using namespace std ;

int main(){
    int n ;
    int x ;
    cin>>n >> x;

    int temp = n;
    n = x;
    x = temp ;

    cout<<n<<","<<x;
}