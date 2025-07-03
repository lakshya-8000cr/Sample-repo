//palendrom ';
#include<iostream>
#include<cstring>
using namespace std ;

int main(){
    string name ;
    getline(cin,name);

    int i = 0;

    int len =  name.length();
    int j = len - 1;

    while(i<j){
        if(name[i++]!=name[j--]){
            cout<<"Not palendrom string";
            return 0;
        }else{
            cout<<"Palendrom string";
            return 0;
            
        }
    }
}
