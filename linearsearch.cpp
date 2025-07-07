#include<iostream>
int main(){

    int n;
    std::cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        std::cin >> arr[i];
    }

    int coin ;
    std::cin >> coin;

    int count = 0;

    for(int i=0; i<n; i++){
        if(coin==arr[i]){
            count++;
        }
    }

    if(count>=1){
        std::cout << "Found " << count <<" times";
    }else{
        std::cout << "not found";
    }

    return 0;
}