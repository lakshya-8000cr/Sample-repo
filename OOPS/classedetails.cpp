// Create a class Car with attributes like brand, model, and year. Write a function to print car details.
#include<iostream>
using namespace std ;

class Car {

    public :
    
    string brand ;
    string model ;
    int year ;
    int price ;
  
    void Details(string brand , string model , int year , int price ){
        this ->brand = brand ;
        this ->model = model ;
        this ->year = year ;
        this ->price = price ;
    }

    void Print(){
        cout<<"Brand is: "<<brand <<endl;
        cout<<"Model is: "<<model<<endl;
        cout<<"year in whihc car come: "<<year<<endl;
        cout<<"Price of the car: "<<price<<endl;
    }

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

    Car B;

    B.Details(brand , model, year , price);
    B.Print();
    
    return 0;
}