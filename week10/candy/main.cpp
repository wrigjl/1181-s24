#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printStringVector(vector<string> vecToPrint) {
    for (size_t index = 0; index < vecToPrint.size(); index++) {
        cout << "At index " << index << " is " << vecToPrint[index] << endl;
    }
}

int main() {
    vector<string> candyBowl;

    candyBowl.push_back("3 Musketeers");
    candyBowl.push_back("Snickers");
    candyBowl.push_back("Reeses");

    printStringVector(candyBowl);
    return 0;
}
