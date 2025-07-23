// Password Analysis:
// Length: 10 characters
// Uppercase: 2
// Lowercase: 4
// Digits: 3
// Special chars: 1
// Strength: STRONG

#include<iostream>
using namespace std ;

class Solution{
    public :
    string input;
    int upper ;
    int lower ;
    int digit;
    int special;

    void Detail(string input){
        this->input = input;
    }

    void print(){
        cout<<"Password Analysis"<<endl;
        cout<<"Length: "<<input.length()<<endl;
    }

    void getting(){
        for(char i : input){
            if(isupper(i)){
                upper++;
            }else if(islower(i)){
                lower++;
            }else if(isdigit(i)){
                digit++;
            }else{
                special++;
            }
        }
    }

    void analyze(){

        cout << "\nPassword Analysis:" << endl;
        cout << "Length: " << input.length() << " characters" << endl;
        cout << "Uppercase: " << upper << endl;
        cout << "Lowercase: " << lower << endl;
        cout << "Digits: " << digit << endl;
        cout << "Special chars: " << special << endl;
        cout << "Strength: " << getStrength() << endl;

    }

    string getStrength(){

        int length = input.length();

        if (length >= 10 && upper >= 2 && lower >= 2 && digit >= 2 && special >= 1) {
            return "STRONG";
        } else if (length >= 8 && upper >= 1 && lower >= 1 && digit >= 1) {
            return "MEDIUM";
        } else {
            return "WEAK";
        }
    }
};

int main(){
    Solution obj;
    string password;

    cout << "Enter your password: ";
    getline(cin, password);

    obj.Detail(password);
    obj.print();
    obj.getting();
    obj.analyze();
    obj.getStrength();

    return 0;
}