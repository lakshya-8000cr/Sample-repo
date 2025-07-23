#include <iostream>
using namespace std;

#define PI_MACRO 3.14159 // used for defined macros 

const double PI_CONST = 3.14159; // used for PI constant

constexpr double PI_CONSTEXPR = 3.14159;

int main() {
    double radius = 5.0;

    double area_macro = PI_MACRO * radius * radius;


    double area_const = PI_CONST * radius * radius;


    double area_constexpr = PI_CONSTEXPR * radius * radius;

    cout << "Using #define macro     : Area = " << area_macro << endl;
    cout << "Using const variable    : Area = " << area_const << endl;
    cout << "Using constexpr keyword : Area = " << area_constexpr << endl;

    return 0;
}
