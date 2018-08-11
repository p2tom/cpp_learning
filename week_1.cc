// Week 1 Assignment
// Sum the elements in a vector

#include <iostream>
#include <vector>

using namespace std;

static constexpr int kNumElements = 40;

// Sum the elements in a vector
// params   [in]        elements: Vector of Elements
//          [return]    Accumulated sum of elements
inline int sumElements(vector<int> elements) {
    int sum = 0;

    // Loop to iterate over vector to sum elements
    for(int index=0; index<static_cast<int>(elements.size()); index++) {
        sum +=elements[index];
    }

    return sum;
}

int main() {
    vector<int> elements(kNumElements);

    // Initialize the vector
    for(int index=0; index<kNumElements; index++) {
        elements[index] = index;
    }

    cout << "Sum of the elements is: " << sumElements(elements) << endl;

    return 0;
}