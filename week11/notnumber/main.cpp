#include <iostream>

#include <iostream>
#include <sstream>

using namespace std;

int main() {
    while(true) {
        cout << "Enter a value: ";

        string userInput;
        cin >> userInput;

        // Use stringstream to convert the input to a double
        istringstream iss(userInput);
        double doubleValue;

        // Try to convert the input to a double
        if (iss >> doubleValue) {
            cout << "You entered a double: " << doubleValue << endl;
            // we have a number
        } else {
            // If conversion to double fails, preserve the input as a string
            cout << "You entered a string: " << userInput << endl;
            if (userInput == "quit") {
                return 0;
            }
        }

    }
    return 0;
}
