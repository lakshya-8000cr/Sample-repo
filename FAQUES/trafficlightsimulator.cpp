#include<iostream>
#include<chrono>
#include<thread>
using namespace std;

class Solution {
public:
    string type;
    int time;

    void Details(string type, int time) {
        this->time = time;
        this->type = type;
    }

    void RGY() {
        if (type == "R") {
            cout << "Current : Red Light" << endl;
            for (int i = time; i >= 0; i--) {
                cout << i << " ";
            }
            cout << "\nGreen Light Activated for 45 seconds" << endl;
            cout << "Next Yellow Light Activated after 5" << endl;

        } else if (type == "G") {
            cout << "Current : Green Light" << endl;
            for (int i = time; i >= 0; i--) {
                cout << i << " ";
            }
            cout << "\nYellow Light Activated for 5 seconds" << endl;
            cout << "Next Red Light Activated after 5" << endl;

        } else if (type == "Y") {
            cout << "Current : Yellow Light" << endl;
            for (int i = time; i >= 0; i--) {
                cout << i << " ";
            }
            cout << "\nRed Light Activated for 30 seconds" << endl;
            cout << "Next Green Light Activated after 5" << endl;
        } else {
            cout << "Invalid light type entered!" << endl;
        }
    }
};

int main() {
    cout << "Enter The Light (R/G/Y): ";
    string color;
    getline(cin, color);

    cout << "Enter the time: ";
    int time;
    cin >> time;

    Solution obj;
    obj.Details(color, time);
    obj.RGY();

    return 0;
}
