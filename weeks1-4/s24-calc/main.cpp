#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double pi = acos(-1.0);
    cout << "I think pi is " << pi << endl;

    // radians = (degrees * 2 pi) / 360
    cout << cos((1 * 2 * pi) / 360.0) << endl;

    int myNumber;
    myNumber = ceil(cos((1 * 2 * pi) / 360.0));
    cout << "My Number is: " << myNumber << endl;
    // reads two integers and prints their:
    //  sum, difference, product, and quotient
    cout << "Give me number A: ";
    double numberA, numberB;
    cin >> numberA;

    cout << "Give me number B: ";
    cin >> numberB;

    //  sum, difference, product, and quotient
    cout << "A+B=" << numberA + numberB << endl;
    cout << "A-B=" << numberA - numberB << endl;
    cout << "A*B=" << numberA * numberB << endl;
    cout << "A/B=" << numberA / numberB << endl;
    cout << "A+pi=" << numberA + 1 << endl;
    return 0;
}
