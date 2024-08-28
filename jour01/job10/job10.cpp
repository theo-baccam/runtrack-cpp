#include <iostream>

int getSmallestIntegerPointerInArray(int *integerArray[], int arraySize) {
    int smallestInteger = *integerArray[0];
    for (int i = 1; i < arraySize; i++) {
        if (*integerArray[i] < smallestInteger) {
            smallestInteger = *integerArray[i];
        };
    };

    return smallestInteger;
};


int main() {
    int a0 = 92;
    int a1 = 17412;
    int a2 = 74;
    int a3 = 1;
    int a4 = 83;
    int a5 = 2;

    int aSize = 6;
    int *a[aSize] = {&a0, &a1, &a2, &a3, &a4, &a5};


    int b0 = 182;
    int b1 = -1932;
    int b2 = 852;
    int b3 = 123;

    int bSize = 4;
    int *b[bSize] = {&b0, &b1, &b2, &b3};


    std::cout << "a: " << getSmallestIntegerPointerInArray(a, aSize) << '\n';
    std::cout << "b: " << getSmallestIntegerPointerInArray(b, bSize) << '\n';

    return 0;
};