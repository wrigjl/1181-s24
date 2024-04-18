#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int> &list) {
    for (size_t x = 0; x < list.size(); x++) {
        cout << list[x] << " ";
    }
    cout << endl;
}

void doBubblePass(vector<int> &list, int firstIndex, int lastIndex) {
    // sort the elements of "list" 1 pass through the bubble sort algorithm
    //For each pass, we will move left to right swapping adjacent elements
    // as needed. Each pass moves the next largest element
    // into its final position.
    for (size_t i = firstIndex; i < lastIndex; i++) {
        if (list[i] > list[i + 1]) {
            swap(list[i], list[i + 1]);
        }
    }
}

// for all elements 1 to N <- human counting
//  x = pick random number from 1 to N
// swap (deck[i], deck[x]
void shuffle(vector<int>& deck) {
    for (size_t i = 0; i < deck.size(); i++) {
        int x = rand() % deck.size();
        swap(deck[i], deck[x]);
    }
}

int main() {
    vector<int> myList;
    for (int i = 0; i < 10; i++) {
        myList.push_back(rand() % 100);
    }


    cout << "Sorting: " << myList.size() << endl;
    for (size_t i = 0; i < myList.size() - 1; i++) {
        doBubblePass(myList, 0, myList.size() - 1 - i);
    }

    printVector(myList);
    shuffle(myList);
    printVector(myList);
    cout << "sorted..." << endl;
    return 0;
}
