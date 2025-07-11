// #include<iostream>
// #include<climits>
// using namespace std ;

// int main(){
//     int n ;
//     cin>> n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int min = arr[0];
//     int max = INT_MIN;
//     int secondlargest = INT_MAX;

//     for(int i = 0;i<n; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }else if(arr[i]<min){
//             min = arr[i];
//         }else if(arr[i]>secondlargest && arr[i]!=max){
//             secondlargest = arr[i];
//         }
//     }

//     cout<<"maximum value: "<<max<<endl;
//     cout<<"Minimum value: "<<min<<endl;
//     cout<<"Second largest: "<<secondlargest;

//     return 0;
// }


// find second larget element in the array;
#include<iostream>
#include<climits>

int main(){
    int n;
    std::cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        std::cin >> arr[i];
    }

    int largest = INT_MIN;
    int secondlagrest = INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            secondlagrest = largest;
            largest = arr[i];
        }else if(arr[i]>secondlagrest && arr[i]!=largest){
            secondlagrest = arr[i];
        }
    }

    std::cout << largest <<"\n" << secondlagrest;
    return 0;
}