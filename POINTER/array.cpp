#include<iostream>
using namespace std ;

int main(){

    int n;
    cin>>n;

    int arr[1000];

    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }

    int *ptr = arr;
 
    for(int i=0; i<n; i++){
        cout<<*(ptr+i)<<" ";
    }
}