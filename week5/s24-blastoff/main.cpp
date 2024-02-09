#include <iostream>

using namespace std;

void countdown(int n, int stoppingPoint) {
    if (n > stoppingPoint) {
        cout << "Blastoff!" << endl;
        return;
    }
    cout << n << "...(" << stoppingPoint << ")" << endl;
    countdown(n + 1, stoppingPoint - 1);
}

int main() {
    countdown(12, 50);
    return 0;
}
