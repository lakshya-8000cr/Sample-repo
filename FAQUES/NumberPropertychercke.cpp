#include <iostream>
using namespace std;

class NumberProperties {
private:
    int num;

public:

    NumberProperties(int n) {
        num = n; // Constructor
    }

    bool isEven() {
        return num % 2 == 0;
    }

    bool isOdd() {
        return !isEven();
    }

    bool isPositive() {
        return num > 0;
    }

    bool isNegative() {
        return num < 0;
    }

    bool isZero() {
        return num == 0;
    }

    bool isDivisibleBy3And5() {
        return (num % 3 == 0) && (num % 5 == 0);
    }

    bool isSingleDigit() {
        return num >= -9 && num <= 9;
    }

    void displayResults() {
        cout << "\n--- Number Analysis ---\n";
        cout << "Even: " << (isEven() ? "True" : "False") << endl;
        cout << "Odd: " << (isOdd() ? "True" : "False") << endl;
        cout << "Positive: " << (isPositive() ? "True" : "False") << endl;
        cout << "Negative: " << (isNegative() ? "True" : "False") << endl;
        cout << "Zero: " << (isZero() ? "True" : "False") << endl;
        cout << "Divisible by both 3 and 5: " << (isDivisibleBy3And5() ? "True" : "False") << endl;
        cout << "Single Digit Number: " << (isSingleDigit() ? "True" : "False") << endl;
    }
};

int main() {
    int input;
    cout << "Enter an integer: ";
    cin >> input;

    NumberProperties np(input);
    np.displayResults();

    return 0;
}
