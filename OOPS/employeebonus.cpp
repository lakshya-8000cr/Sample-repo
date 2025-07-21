#include<iostream>
using namespace std ;

class Sol {
    private:
    double salary ;

    public :

    int id;
    string name;
    int exp ;
    double bonus ;

    Sol(double salary){
        this->salary = salary; //  this is a defiend constructor ;
    }

    void Detail(int id, string name, int exp){
        this->id = id;
        this->name = name;
        this->exp = exp ;
    }

     void Print(){

        if(exp<2){

           bonus = 0.5 * salary + salary ;
           cout<<"Name: "<<name;
           cout<<"ID: "<<id;
           cout<<"Salary: "<<salary;
           cout<<"Experiecne: "<<exp;
           cout<<"Bonus According to sal: "<<bonus;
           return 0;

        }else if(exp>=2 && exp<=5){

            bonus = 1.5 * salary + salary; 

            return 0;

        }else{

            cout<<"invalid";

        }
    }
};

int main(){
    string name ;
    getline(cin,name);
    double salary;
    cin>>salary;
    int id;
    cin>>id;
    int exp;
    cin>>exp;

    Sol obj(salary) ;
    obj.Detail(id , name , exp);
    obj.Print();
}