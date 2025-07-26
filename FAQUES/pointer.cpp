#include<iostream>
using namespace std ;

int main(){
    int n = 10 ;
    int *ptr = &n;
    int **pot = &ptr;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&n<<endl;
    cout<<(*pot)<<endl;
    cout<<&pot<<endl;
    return 0;
}