#include <iostream>
#include <vector>

using namespace std;

int vectorSum(const vector<int>& mynums) {
    int sum = 0;
    cout << sum << endl;
    for (size_t index = 0; index < mynums.size(); ++index) {
        sum += mynums[index];
        // sum = sum + numbers[index]  ^^ same as above
    }
    return sum;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8 , 9, 10};

    // compute the sum of the vector
    cout << "Sum: " << vectorSum(numbers) << endl;

    // compute the average of the vector
    // compute the number of even numbers in the vector
    // find the number of 6's in the vector
    int sixes = 0;
    for (size_t index = 0; index < numbers.size(); ++index) {
        if (numbers[index] == 6) {
            sixes++;
        }
    }
    cout << "There are " << sixes << " 6's" << endl;


    return 0;
}
