#include<iostream>
using namespace std ;

class Person {
    public :

    string name ;
    int age ;

};

class Student : public Person {
    public:
    
    int marks ;

    void Data(string name , int age , int marks){

        this->name = name ;
        this->age = age ;
        this->marks = marks;

    }

}; 


int main(){
    string name ;
    int age ;
    getline(cin,name);
    cin>>age;

   

} 