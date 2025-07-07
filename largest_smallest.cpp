// q7Find the largest and smallest number in an array
#include<iostream>
using namespace std ;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int large = arr[0];
    int min = arr[0];

    for(int i =0; i<n; i++){
        if(arr[i]>large){
            large = arr[i];
        }else if(arr[i]<min){
            min = arr[i];
        }
    }

    cout << large <<"\n" <<min;

    return 0;
}