#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers(4);



    // string is a vector<char>
    numbers[0] = 42;
    numbers[1] = numbers[0] / 2;
    numbers[2] -= 4;
    // equivalent to: numbers[2] = numbers[2] - 4;
    numbers[3] += 100;
// 42, 21, -4, 100

    size_t index = 0;
    while (index < numbers.size()) {
        cout << index << ": " << numbers[index] << endl;
        index++;
    }

    for (size_t x = 0; x < 20; x++) {
        numbers[x] = 0x42424242;
        //cout << x << ": " << numbers[x] << endl;
    }

    // x++ is x += 1 is x = x + 1
    return 0;
}
