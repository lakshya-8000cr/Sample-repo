// q7 check if number is armstrong
#include<iostream>
#include<math.h>

int main(){
    int n;
    std::cin >> n;
    int remainder ;
    int original = n;
    int sum = 0;
    int count = 0;
    int temp = n;

    while(temp!=0){
        temp = temp / 10;
        count++;
    }

    while(n!=0){
        remainder = n % 10;
        sum += pow(remainder,count);
        n = n/10;
    }

    if(sum==original){
        std::cout <<"Armstrong";
    }else{
        std::cout << "Not Armstrong";
    }

    return 0;
}
