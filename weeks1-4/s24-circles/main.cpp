#include <iostream>
#include <cmath>

using namespace std;

// Let's create a function that shows the measurement and number like so:
// number: type
void printMeasurement(string name, double number) {
    cout << number << ": " << name << endl;
}

// Write a function that computes and displays the area of a circle given a radius
void displayCircumference(double X, double pi) {
    printMeasurement("circumference", 2 * pi * X);
}

void displayArea(double X, double pi) {
    printMeasurement("area", pi * X * X);
}

int main() {
    // Ask for a radius
    cout << "Radius, now, sucka: ";
    double radius;
    cin >> radius;

    cout << "You said: " << radius << endl;

    // compute and display the circumference and area of the corresponding circle
    // 2 pi R = circumference
    // area = pi * R * R

    double pi = acos(-1.0);
    displayArea(radius, pi);
    displayCircumference(radius, pi);
    return 0;
}

