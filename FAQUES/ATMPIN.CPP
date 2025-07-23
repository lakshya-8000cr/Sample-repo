#include<iostream>
using namespace std ;

class Solution {
    public:
    int CORRECT_PIN = 1234;
    int current = 5000;

    int PIN(){
        int PIN ;
        for(int i=3 ; i>=1; i--){
            cout<<"Enter the 4 Digit PIN: ";
            cin>>PIN;
            if(PIN==CORRECT_PIN){
                cout<<"PIN Accepted! Welcome"<<endl;
                break;
            }else{
                cout<<"Incorrect PIN: "<<i<<" attempt remaining"<<endl;
                if(i==1){
                    cout<<"Account Locked";
                    return 0;
                }
            }
        }

        cout<<"====TRANSACTION MENU===="<<endl;
        cout<<"1.Check Balance"<<endl;
        cout<<"2.Withdraw Money"<<endl;
        cout<<"3.Deposit Money"<<endl;
        cout<<"Enter Choice: ";
        int choice;
        cin>>choice;

        if(choice==1){
            balance();
        }else if(choice==2){
            cout<<"Enter the amount to withdraw: ";
            int amount ;
            cin>>amount;
            Withdraw(amount);
        }else{
            cout<<"Enter the amount to deposit: ";
            int amount;
            cin>>amount;
            Deposit(amount);
        }
    }

    void balance(){
        cout<<"Current Balance: "<<current<<endl;
    }

    void Deposit(int deposit){
        cout<<"Money Deposited: "<<deposit<<endl;
        cout<<"Account Balance: "<<(current += deposit); 
    }

    void Withdraw(int withdraw){
        cout<<"Money Withdraw: "<<withdraw<<endl;
        cout<<"Account Balnce: "<<(current -= withdraw);
    }
};

int main(){
    Solution obj;
    obj.PIN();
    return 0;
}