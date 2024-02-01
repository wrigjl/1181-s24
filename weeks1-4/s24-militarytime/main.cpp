#include <iostream>
using namespace std;

void printNormalTime(int milTime) {
    int time12;
    time12 = milTime % 12;

    if (milTime == 0) {
        time12 = 12;
    } else if (milTime == 12) {
        time12 = 12;
    }

    cout << "That's " << time12;

    if (milTime < 12) {
        cout << "am";
    } else {
        cout << "pm";
    }
}

int main() {
    // Ask the user for a time in "military time" and convert it to "normal" time.
    cout << "Give me hours in military time: ";
    int time24;
    cin >> time24;
    cout << "You said: " << time24 << endl;

    printNormalTime(time24);
    return 0;
}

