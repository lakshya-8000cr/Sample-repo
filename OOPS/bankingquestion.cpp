#include<iostream>
using namespace std ;

class Account {
    private :
    int* Balance ;

    public: 

    int new_balance;

    Account(int balance ){
       Balance = new int(balance);
       new_balance = *Balance ;
       cout << "current balance: " << new_balance << endl;
    }

    void All(char type , int amount){

         if(type == 'D'){
            if(amount<=0){
                cout<<"Deposit should be positive: current balance: "<<new_balance << endl; 
            }else{
                new_balance += amount;
                cout<<"Deposit Successfull. current balance: "<< new_balance <<endl;
            }
         }

         if(type == 'W'){
            if(amount>new_balance){
                cout<<"Not enough Funds. current balance: "<<new_balance << endl;
            }else{
                new_balance -= amount;
                cout<<"Withdraw Successfull. current balance: "<<new_balance<<endl;
            }
         }
    }

    ~Account(){
        delete Balance ;
    }

};

int main(){

    int balance ;
    cin >> balance;


    Account A(balance);
    
    while(true){
        int amount;
        char type;
        
        cin >> type; 
        if(type=='E'){
           cout<<"Exit the loop";
            break;
        }
        cin >> amount ;

        A.All(type , amount);
    }

}