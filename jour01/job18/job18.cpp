#include <iostream>


int* addElement(int integerArray[], int size, int newInteger) {
    int *newIntegerArray = (int*) malloc(sizeof(int) * (size + 1));

    for (int i = 0; i < size; i++) {
        newIntegerArray[i] = integerArray[i];
    }
    newIntegerArray[size] = newInteger;

    free(integerArray);
    return newIntegerArray;
}

void showTable(int integerArray[], int size) {
    std::cout << '{' << integerArray[0];
    for (int i = 1; i < size; i++) {
        std::cout << ", " << integerArray[i];
    }
    std::cout << "}\n";
}


int main() {
    int *integerArray = (int*) malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++) {
        integerArray[i] = 0;
    };
    showTable(integerArray, 5);

    integerArray = addElement(integerArray, 5, 1);
    showTable(integerArray, 6);

    integerArray = addElement(integerArray, 6, 2);
    showTable(integerArray, 7);

    integerArray = addElement(integerArray, 7, 3);
    showTable(integerArray, 8);

    return 0;
}