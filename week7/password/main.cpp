#include <iostream>

using namespace std;


int MINIMUM_PASSWORD_LENGTH = 12;

// Check passwords:
// Do they have lowercase letters?
// Do they have uppercase letters?
// Does it have digits?
// Does it have special characters?
// does it contain "password"?

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
            // found a lowercase letter
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

    // Are they long enough? (12 characters or more)
    if (password.length() >= MINIMUM_PASSWORD_LENGTH) {
        cout << "long enough" << endl;
        isLongEnough = true;
    }
    if (hasLowerCase(password)) {
        cout << "Yes, has lowercase." << endl;
    }

    // Does it have lowercase letters?
    cout << "Your password is " << password.length() << " characters long" << endl;

    return 0;
}
