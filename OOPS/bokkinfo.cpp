// Create a class Book with constructor to initialize values, and a function to display book info.

#include<iostream>
using namespace std ;

class Book {

    public:
    int price ;
    string author;
    int pages ;
    
    Book(int price){
        this->price = price ;
    }

    void Detail(string author , int pages){
        this->author = author ;
        this->pages = pages ;
    }

    void print(){
        cout<<"Author: "<<author<<endl;
        cout<<"Pages: "<<pages<<endl;
        cout<<"Price: "<<price<<endl;
    }

    ~Book(){}

};


int main(){
    string author ;
    getline(cin,author);
    int price;
    cin>>price;
    int pages;
    cin>>pages ;

    Book B(price);
    B.Detail(author,pages);
    B.print();

    return 0;
}