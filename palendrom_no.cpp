//palendrom;
#include<iostream>
using namespace std ;

int main(){
    int reverse = 0;
    int c;
    cin>>c;
    int original = c ;

    while(c!=0){
        int remainder = c % 10;
        reverse = reverse*10 + remainder;
        c = c / 10;
    }

    if(reverse==original){
        cout<<"yes palendrom";
    }else{
        cout<<"Not palendrom";
    }

    return 0;

}

