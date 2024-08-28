#include <iostream>


void doubleArray(int (&integerArray)[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        integerArray[i] *= 2;
    }
}

void printArray(int integerArray[], int arraySize) {
    std::cout << '{';
    for (int i = 0; i < arraySize; i++)  {
        if (i == arraySize - 1) {
            std::cout << integerArray[i] << "}\n";
            return;
        }
        std::cout << integerArray[i] << ", ";
    }
}


int main() {
    int arraySize = 4;
    int array[arraySize] = {1, 2, 4, 8};
    printArray(array, arraySize);

    doubleArray(array, arraySize);
    printArray(array, arraySize);

    return 0;
}