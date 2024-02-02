#include <iostream>

using namespace std;

void countdown(int n) {
    if (n <  0 &&  n >= -4) {
        cout << "Blastoff!" << endl;
        return;
    }
    cout << n << "..." << endl;
    countdown(n - 1);
}

int main() {
    countdown(12);
    return 0;
}
