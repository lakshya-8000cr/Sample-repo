// Create a class Book with constructor to initialize values, and a function to display book info.

#include<iostream>
using namespace std ;

class Book {

    public:
    int price ;
    string author;
    int pages ;
    int buyer;
    
    Book(int price){
        this->price = price ;
    }

    void Detail(string author , int pages){
        this->author = author ;
        this->pages = pages ;
    }

    void Detail(string author , int pages , int buyer){
        this->author = author;
        this->pages = pages;
        this->buyer = buyer ;
    }

    void print(){
        cout<<"Author: "<<author<<endl;
        cout<<"Pages: "<<pages<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Buyer: "<<buyer<<endl;
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
    int buyer;
    cin>>buyer;

    Book B(price);
    B.Detail(author,pages);
    B.Detail(author,pages,buyer);
    B.print();

    return 0;
}