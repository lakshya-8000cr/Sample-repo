#include<iostream>
#include<random>
#include<ctime>
#include<cstdlib>
using namespace std ;

int main(){
    cout<<"Enter number of round: ";
    int round ;
    cin>>round;

    srand(time(0)); 
    int points = 0;

    if(round>=1){
        for(int i = 1; i<=round ; i++){
            int num = (rand() % 6) + 1;
            int num2 = (rand() % 6) + 1;
            cout<<"Round "<<i<<": Rolling Dice"<<endl;
            cout<<"Dice 1: "<<num<<", Dice 2: "<<num2<<endl;
            if((num + num2) == 7){
                cout<<"LUCKY SEVEN!"<<"Double Points"<<endl;
                points += ((num+num2) *2);
                cout<<"Score: "<<points<<endl;
            }else if((num ==1) && (num2==1)){
                cout<<"Both Dice Show 1: "<<endl;
                points += 0;
                cout<<"Score: "<<points<<endl;
            }else if(num==num2){
                cout<<"Both Dicw Shows Same: "<<num<<endl;
                points += (num + num2) + 10;
                cout<<"Score: "<<points<<endl;
            }else{
                points += ( num + num2 );
            }
        }
    }
}