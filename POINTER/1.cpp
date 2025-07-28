#include <iostream>
#include <memory>
using namespace std;

int main() {

    
    unique_ptr<int> ptr1 = make_unique<int>(42);
    cout << "Value: " << *ptr1 << endl;

    unique_ptr<int> ptr2 = move(ptr1);
    if (!ptr1) {
        cout << "ptr1 is null now (ownership transfered)" << endl;
    }
    cout << "ptr2 value: " << *ptr2 << endl;

    return 0;
}