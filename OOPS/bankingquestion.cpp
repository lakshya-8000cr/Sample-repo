// Use private members and public methods to implement encapsulation in a BankAccount class.

#include<iostream>
using namespace std ;

class Bank{
    private:
    int Balance ;

    public :
    int withdraw ;
    int deposit ;
    int new_balance ;


    Bank(int Balance){
        this->Balance = Balance ;
        new_balance = Balance ;
    }

    void All(int withdraw, int deposit){
        if(withdraw<0){
            cout<<"Not eligible withdraw"<<endl;
        }
        else{
            new_balance = Balance - withdraw ;
        }

        if(deposit<0){
            cout<<"Invalid Deposit:";
        }else{
            new_balance += deposit ;
        }
    }

};

int main(){
     int balance;
     cin>>balance;
     int deposit ;
     cin>>deposit ;
     int withdraw ;
     cin>>withdraw;

     Bank B(balance);
     B.All(withdraw,deposit);

    
     
}