#include <iostream>
#include <cmath>

using namespace std;

// What is the return type of this function?
// What is the type of the parameter to this function?
double doSomething(int number) {
    // What does this function print?
    // What does this function return?
    cout << number << " is something" << endl;
    return 2 * number;
}

// Write a function that returns the maximum of two given integers
int maximum(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}
// print all the numbers between 1 and n, inclusive.
void printNumsOneTo(int n) {
    int counter = 1;
    while (counter <= n) {
        cout << counter << endl;
        counter = counter + 1;
    }
}

// Write a function that prints a table numRows rows and numCols columns and
// each entry is i^j (use pow)

void printPowerTableRow(int rowNum, int numCols) {
    int counter = 0;
    while (counter < numCols) {
        cout << pow(rowNum, counter) << "\t";
        counter = counter + 1;
    }
    cout << endl;
}

void printPowerTable(int numRows, int numCols) {
    int counter = 0;
    while(counter < numRows) {
        printPowerTableRow(counter, numCols);
        counter = counter + 1;
    }
}

// Count the vowels in a string. Return the number of vowels (y is a consonant).
// You may assume the string is all lowercase.
int countVowels(string myString) {
    int counter = 0;
    int numVowels = 0;

    while (counter < myString.length()) {
        if (myString[counter] == 'a' || myString[counter] == 'i' ||
            myString[counter] == 'e' || myString[counter] == 'o' ||
            myString[counter] == 'u') {
            numVowels = numVowels + 1;
        }
        counter = counter + 1;
    }
    return numVowels;
}

int main() {
//    cout << doSomething(8) << endl;
//    cout << "max of 1, 2: " << maximum(1, 2) << endl;
//    cout << "max of 2, 1: " << maximum(2, 1) << endl;
//    cout << "max of -1, -2: " << maximum(-1, -2) << endl;
//    cout << "max of 0, 42: " << maximum(0, 42) << endl;
//    cout << "max of 42, 42: " << maximum(42, 42) << endl;

//    printNumsOneTo(5);
    printPowerTable(8, 10);
    return 0;
}
