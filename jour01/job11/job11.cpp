#include <iostream>


void swapValues(int &a, int &b) {
    int swap = a;
    a = b;
    b = swap;
}


int main() {
    int a = 54;
    int b = 92;
    std::cout << "a: " << a << "\nb: " << b << '\n';

    swapValues(a, b);
    std::cout << "a: " << a << "\nb: " << b << '\n';

    return 0;
}