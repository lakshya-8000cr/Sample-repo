#include<iostream>
using namespace std ;

class Solution {
    public:
    int chips = 2;
    int soda = 1;
    int candy = 5;
    int water = 3;


    void Print(){
        cout<<"1.Chips: "<<chips<<endl;
        cout<<"2.Soda: "<<soda<<endl;
        cout<<"3.Candy: "<<candy<<endl;
        cout<<"4.Water: "<<water<<endl;
        cout<<"5.Exit: "<<endl;
    }

    void Money(int amount){
          int items;
          cout<<"Select The Item: "<<items;
          cin>>items;

          if(items==1)cout<<"Selected Item: Chips"<<endl;
          else if(items==2)cout<<"Selected Item: Soda"<<endl;
          else if(items==3)cout<<"Selected Item: Candy"<<endl;
          else if(items==4)cout<<"Selected Item: Water"<<endl;

          cout<<"Enter Money"<<endl;
          while(amount!=items){
          cout<<"Enter Amount: "<<amount<<endl;
          cout<<"Inserted Amount: "<<amount<<"Need more: "<<(items-amount)<<endl;
          }

          if(amount==items){
            cout<<"Dispensing: ";
          }
    }
};