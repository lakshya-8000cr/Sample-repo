// Initial Account Balance: 1000
// Initial Bank Balance: 50000
// After deposit of 500:
// Account Balance: 1500
// Total Bank Balance: 50500
// Total Transactions: 1
// After withdrawal of 200:
// Account Balance: 1300
// Total Bank Balance: 50300
// Total Transactions: 2

#include<iostream>
using namespace std ;

class Solution {
    private: 

    double Bank_Balance = 500000;

    public:
    double Account_Balance ;
    int transaction = 0 ;

    void initialize( double Account_Balance){
        this->Account_Balance = Account_Balance;
    }


    void Print(){
        cout<<"Initial Account Balance: "<<Account_Balance<<endl;
        cout<<"Initial Bank Balance: "<<Bank_Balance<<endl;
    }

    void Deposit(double deposit){

        cout<<"After Deposit of: "<<deposit<<endl;
        cout<<"Account Balance: "<<( Account_Balance += deposit )<<endl;
        cout<<"Total Bank Balance: "<<(Bank_Balance += Account_Balance)<<endl;
        cout<<"Total Transaction: "<< transaction++<<endl;
    }
    
    void Withdrawl(double withdrawl){
        cout<<"After Withdrawl of: "<<withdrawl<<endl;
        cout<<"Account Balance: "<<( Account_Balance -=withdrawl )<<endl;
        cout<<"Total Bank Balance: "<<(Bank_Balance -= Account_Balance)<<endl;
        cout<<"Total Transaction: "<< transaction++<<endl;
    }
};

int main(){
    Solution obj;
    int Account ;
    cin>>Account;

    while(true){
    double deposit;
    cin>>deposit;
    double withdrawl;
    cin>>withdrawl;
    obj.initialize(Account);
    obj.Print();
    obj.Deposit(deposit);
    obj.Withdrawl(withdrawl);
    }

    return 0;
} 