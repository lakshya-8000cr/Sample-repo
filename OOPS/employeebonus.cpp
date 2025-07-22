#include<iostream>
#include<iomanip>
using namespace std;

class Sol {
private:
    double salary;

public:
    int id;
    string name;
    int exp;
    double bonus;


    Sol(double salary) {
        this->salary = salary; // this is a constrictor ;
    }


    void Detail(int id, string name, int exp) {
        this->id = id;
        this->name = name;
        this->exp = exp;
    }


void Print() {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Salary: " << salary << endl;
    cout << "Experience: " << exp << " years" << endl;

    if (exp < 2) {
        bonus = 0.10 * salary;
    } else if (exp >= 2 && exp <= 5) {
        bonus = 0.15 * salary;
    } else if (exp > 5) {
        bonus = 0.20 * salary;
    } else {
        bonus = 0;
        cout << "Invalid experience.\n";
    }

    double total = salary + bonus;
    cout << "Bonus Amount: $" << fixed << setprecision(2) << bonus << endl; // setprecision is for the decimal values , like if you dont want to go the decimal beyond the 2 decimal palces 
    cout << "Total Salary: $" << fixed << setprecision(2) << total << endl;
}


    ~Sol(){};
};

int main() {
    string name;
    cout << "Enter Name: ";
    getline(cin, name);

    double salary;
    cout << "Enter Salary: ";
    cin >> salary;

    int id;
    cout << "Enter ID: ";
    cin >> id;

    int exp;
    cout << "Enter Experience (in years): ";
    cin >> exp;

    Sol obj(salary);
    obj.Detail(id, name, exp);
    obj.Print();

    return 0;
}
