#include <iostream>

using namespace std;

int myFunction(int num) {
    cout << "This is my function" << endl;
    if (num == 42) {
        return 0;
    } else {

    }
}

int main() {
    cout << "Is this program is going to crash?" << endl;

    myFunction(0);
    cout << "My function returned..." << endl;
    return 0;
}
