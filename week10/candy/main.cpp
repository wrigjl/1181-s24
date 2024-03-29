#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

void printStringVector(const vector<string>& vecToPrint) {
    for (size_t index = 0; index < vecToPrint.size(); index++) {
        cout << "At index " << index << " is " << vecToPrint[index] << endl;
    }
}

// Given a bowl, return a random candy from it
string selectRandomCandy(const vector<string>& bowl) {
    int number = rand() % bowl.size();

    //cout << "number: " << number << endl;
    return bowl[number];
}

// build a vector of random candies
vector<string> selectNCandies(const vector<string>& bowl, int howmany) {
    vector<string> candies;
    for (int i = 0; i < howmany ; i++) {
        candies.push_back(selectRandomCandy(bowl));
    }
    return candies;
}

int main() {
    vector<string> standardCandyBowl;

    standardCandyBowl.push_back("3 Musketeers");
    standardCandyBowl.push_back("Snickers");
    standardCandyBowl.push_back("Reeses");

    printStringVector(standardCandyBowl);

    vector<string> ourBowl(standardCandyBowl);
    vector<string> anotherBowl = standardCandyBowl;

    ourBowl.push_back("Heath");

    cout << "Last element: " << ourBowl.back() << endl;
    cout << "First element: " << ourBowl.front() << endl;
    cout << "number of elements: " << ourBowl.size() << endl;
    cout << "2nd element: " << ourBowl.at(1) << endl;

    printStringVector(ourBowl);
    ourBowl.pop_back();
    ourBowl.pop_back();
    ourBowl.back() = "Skittles";
    printStringVector(ourBowl);

//    for (int i = 0; i < 10; i++) {
//        cout << selectRandomCandy(standardCandyBowl) << endl;
//    }
    vector<string> eBowl = selectNCandies(standardCandyBowl, 100);
    printStringVector(eBowl);
    return 0;
}
