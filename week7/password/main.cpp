#include <iostream>

using namespace std;


int MINIMUM_PASSWORD_LENGTH = 12;

// Check passwords:
// Do they have lowercase letters?
// Do they have uppercase letters?
// Does it have at least 2 digits?
// Does it have special characters?
// does it contain "password"?

bool hasTwoDigits(string str) {
    int len = str.length();
    int i = 0;
    int numberOfDigits = 0;

    while (i < len) {
        if (isdigit(        str[i]        )) {
            numberOfDigits = numberOfDigits + 1;
        }
        i = i + 1;
    }
    if (numberOfDigits >= 2) {
        return true;
    }
    return false;
}

bool hasLowerCase(string str) {
    int len = str.length();
    int i = 0;

    while (i < len) {
        if (islower(str[i])) {
            // found a lowercase letter
            return true;
        }
        i = i + 1;
    }
    return false;
}

bool hasUpperCase(string str) {
    int len = str.length();
    int i = 0;

    while (i < len) {
        if (isupper(str[i])) {
            // found a uppercase letter
            return true;
        }
        i = i + 1;
    }
    return false;
}

int main() {
    string password;
    cout << "What is your password? ";
    cin >> password;

    cout << "You said: " << password << endl;

    bool isLongEnough = false;
    bool lowercaseFound = false;
    bool uppercaseFound = false;
    bool twoDigitsFound = false;

    // Are they long enough? (12 characters or more)
    if (password.length() >= MINIMUM_PASSWORD_LENGTH) {
        cout << "long enough" << endl;
        isLongEnough = true;
    }
    // Does it have lowercase letters?
    if (hasLowerCase(password)) {
        cout << "Yes, has lowercase." << endl;
        lowercaseFound = true;
    }

    if (hasUpperCase(password)) {
        cout << "Yes, has uppercase." << endl;
        uppercaseFound = true;
    }

    if (hasTwoDigits(password)) {
        cout << "Yes, 2 digits." << endl;
        twoDigitsFound = true;
    }

    if (isLongEnough && uppercaseFound && lowercaseFound) {
        cout << "Your password is strong!" << endl;
    } else {
        cout << "WEAK!" << endl;
    }

    cout << "Your password is " << password.length() << " characters long" << endl;

    return 0;
}
