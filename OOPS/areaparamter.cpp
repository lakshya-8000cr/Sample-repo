// Define a class Rectangle with length and breadth. Add functions to calculate:
// Area
// Perimeter

#include<iostream>
using namespace std ;

class Rectangle {

    public :
    int length ;
    int width ;
    
    Rectangle(int length,int width){
        this->length = length;
        this->width = width ;
    }
    
    int area;
    int peri;

    void Area(){
         area = length * width ;
    }

    void Perimeter(){
         peri = 2 * (length+width);
    }

    void detail(){
        cout<<"Area: "<<area <<endl;
        cout<<"Perimetter: "<<peri<<endl;
    }

    ~Rectangle(){};
};


int main(){
    int area ;
    cin>>area;
    int width;
    cin>>width;

    Rectangle R(area,width);
    R.Area();
    R.Perimeter();

    R.detail();

    return 0;

}