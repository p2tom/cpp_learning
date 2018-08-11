#include <iostream>

using namespace std;

template <class T>
T sumElements(const T array[], int numElems = 1, T sum = 0) {

    for(int i=0; i<numElems; i++) {
        sum = sum+array[i];
    }

    return sum;
}

int main() {

    int intArray[] = {1,2,3,4,5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    cout << "intSum = " << sumElements(intArray, 5, 10) << endl;
    cout << "dobSum = " << sumElements(doubleArray) << endl;
}