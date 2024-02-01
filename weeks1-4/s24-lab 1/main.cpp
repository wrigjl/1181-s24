#include <iostream>

using namespace std;

int main() {
    string name, city, city2;

    // name <- "Jason";
    name = "Jason";

    cout << "Give me your name: ";
    cin >> name;

    cout << "Give me your city: ";
    cin >> ws;
    getline(cin, city);

    cout << "Give me your city2: ";
    cin >> ws;
    getline(cin, city2);

    // Say: My name is NAME INITIAL. and I am XX years old.
    cout << "My name is " << name << " and I live in " << city << " and " << city2 << endl;
    return 0;
}
