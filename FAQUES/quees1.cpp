// employe salary calculator 
// Enter Employee ID: 1001
// Enter Employee Name: John Smith
// Enter Basic Salary: 50000
// Enter Years of Experience: 3

// ID: 1001
// Name: John Smith
// Basic Salary: $50000.00
// Experience: 3 years
// Bonus Rate: 10%
// Bonus Amount: $5000.00
// Total Salary: $55000.00
#include<iostream>
using namespace std;

class Solution {
public:
    string name;
    int ID;
    double Salary;
    int EXP;
    double Bonus;

    void Detail(int ID, string name, double Salary, int EXP) {
        this->ID = ID;
        this->name = name;
        this->Salary = Salary;
        this->EXP = EXP;
    }

    void Print() {
        cout << "ID: " << ID << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: $" << Salary << endl;

        if (EXP < 2) {
            Bonus = 0.05 * Salary;
            cout << "Bonus Rate: 5 %" << endl;
            cout << "Bonus Amount: " << Bonus << endl;
            cout << "Total Salary: " << Bonus + Salary << endl;
        } else if (EXP >= 2 && EXP <= 5) {
            Bonus = 0.1 * Salary;
            cout << "Bonus Rate: 10 %" << endl;
            cout << "Bonus Amount: " << Bonus << endl;
            cout << "Total Salary: " << Bonus + Salary << endl;
        } else {
            Bonus = 0.15 * Salary;
            cout << "Bonus Rate: 15 %" << endl;
            cout << "Bonus Amount: " << Bonus << endl;
            cout << "Total Salary: " << Bonus + Salary << endl;
        }
    }
};

int main() {
    int id;
    cin >> id;

    cin.ignore(); // we have used this to ignore the newline character jab bhi getline() se pehle kuch use kiya ho toh cin jaise to use cin.ignore();

    string name;
    getline(cin, name); // Now this will work properly

    double salary;
    cin >> salary;

    int EXP;
    cin >> EXP;

    Solution obj;
    obj.Detail(id, name, salary, EXP);
    obj.Print();

    return 0;
}

