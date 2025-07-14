// Create a class Car with attributes like brand, model, and year. Write a function to print car details.
#include<iostream>
using namespace std ;

class Car {
    public :
    string brand ;
    string model ;
    int year ;
    int price ;

    Car(int year,int price){
        this->year =year ;
        this->price = price ;
    }
  
    void Details(string brand , string model ){
        this ->brand = brand ;
        this ->model = model ;
    }

    void Print(){
        cout<<"Brand is: "<<brand <<endl;
        cout<<"Model is: "<<model<<endl;
        cout<<"year in whihc car come: "<<year<<endl;
        cout<<"Price of the car: "<<price<<endl;
    }

    ~Car(){};

};

int main(){
    string brand ;
    string model ;
    int year ;
    int price ;

    getline(cin,brand);
    getline(cin,model);
    cin>>year ;
    cin>> price ;

    Car B(year,price);

    B.Details(brand , model);
    B.Print();

    return 0;
}