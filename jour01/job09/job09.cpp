#include <iostream>

int getSmallestIntegerInArray(int integerArray[], int arraySize) {
    int smallestInteger = integerArray[0];
    for (int i = 1; i < arraySize; i++) {
        if (integerArray[i] < smallestInteger) {
            smallestInteger = integerArray[i];
        };
    };

    return smallestInteger;
};


int main() {
    int aSize = 6;
    int a[6] = {92, 17412, 74, 1, 83, 2};

    int bSize = 4;
    int b[4] = {182, -1932, 852, 123};

    std::cout << "a: " << getSmallestIntegerInArray(a, aSize) << '\n';
    std::cout << "b: " << getSmallestIntegerInArray(b, bSize) << '\n';

    return 0;
};