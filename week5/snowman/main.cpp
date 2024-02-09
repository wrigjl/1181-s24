#include <iostream>
#include <cmath>

using namespace std;

double getBallSizeFromUser(int ballNumber) {
    double radius;
    cout << "Give me a radius of ball " << ballNumber << ": ";
    cin >> radius;
    cout << "You said: " << radius << endl;

    if (radius < 0) {
        // die or something
        cout << "That's not valid: " << radius << endl;
        return getBallSizeFromUser(ballNumber);
    } else {
        return radius;
    }
}

bool isNotValidNumberOfBalls(int balls) {
    if (balls > 3 || balls < 3) {
        return true;
    } else {
        return false;
    }
}
bool isHappy(string emotion) {
    return emotion == "happy";
}
int main() {
    // Ask for the radius of each snowball

    cout << "My name is \"Jason Wright\" he said" << endl;

    if (isHappy("sad")) {
        cout << "shiny happy people" << endl;
    } else {
        cout << "not happy" << endl;
    }
    // ask for number of balls... is it < 3 or > 3? if so, stop the program
    int numberOfBalls;
    cout << "Number of Balls? ";
    cin >> numberOfBalls;

    if (isNotValidNumberOfBalls(numberOfBalls)) {
        cout << "Invalid number of balls...";
        return 1;
    }
    double radius1 = getBallSizeFromUser(1);
    double radius2 = getBallSizeFromUser(2);
    double radius3 = getBallSizeFromUser(3);

    cout << "R1:" << radius1 << endl << "R2:"
         << radius2 << endl << "R3:"
         << radius3 << endl;
    // compute the volume of each snowball

    // compute the total volume

    return 0;
}
