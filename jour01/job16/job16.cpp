#include <iostream>


int getCharArraySize(char charArray[]) {
    int i = 0;
    while (charArray[i] != 0) {
        i++;
    }
    
    return i;
}

void MySortString(char (&charArray)[]) {
    bool sorted;

    do {
        sorted = true;
        for (int i = 0; i < getCharArraySize(charArray) - 1; i++) {
            if (charArray[i] > charArray[i + 1]) {
                char swap = charArray[i];
                charArray[i] = charArray[i + 1];
                charArray[i + 1] = swap;
                sorted = false;
            }
        }
    } while (!sorted);

    return;
}


int main() {
    char charArray[] = "zyxwvutsrqponmlkjihgfedcba";
    std::cout << charArray << '\n';
    MySortString(charArray);
    std::cout << charArray << '\n';
    return 0;
}