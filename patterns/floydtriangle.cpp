#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 1; 

    for (int i = n; i >= 1; i--) {
        for (int j = i; j <= n; j++) {
            cout << a;
            a++;
        }
        cout << endl;  
    }
}
