#include <iostream>

using namespace std;


// Print a chess board like so:
// XOXOXOXO
// OXOXOXOX
// XOXOXOXO
// OXOXOXOX
// XOXOXOXO
// OXOXOXOX
// XOXOXOXO
// OXOXOXOX

void printRow(int howMany, int rowNumber) {
    int printed = 0;

    cout << "ROW(" << rowNumber << "): ";
    while (printed < howMany) {
        if ((rowNumber % 2) == (printed % 2)) {
            cout << 'O';
        } else {
            cout << 'X';
        }
        cout << "(" << rowNumber << "\t," << printed << ")";
        printed = printed + 1;
    }
    cout << endl;
}

int main() {
    int count = 0;
    int printed = 0;

    cout << "How many rows/columns? ";
    cin >> count;

    while (printed < count) {
        printRow(count, printed);
        printed = printed + 1;
    }
    return 0;
}
