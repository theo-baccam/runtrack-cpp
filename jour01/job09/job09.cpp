#include <iostream>

int* getSmallestIntegerPointer(int (&integerArray)[], int arraySize) {
    int* smallestInteger = &integerArray[0];
    for (int i = 1; i < arraySize; i++) {
        if (integerArray[i] < *smallestInteger) {
            smallestInteger = &integerArray[i];
        };
    };

    return smallestInteger;
};


int main() {
    int arraySize = 6;
    int array[arraySize] = {92, 17412, 74, 1, 83, 2};

    std::cout << "Adresse du plus petit entier: " << &array[3] << '\n';
    std::cout
        << "Adresse pointee par pointeur: "
        << getSmallestIntegerPointer(array, arraySize)
        << '\n';

    return 0;
};