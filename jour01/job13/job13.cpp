#include <iostream>


constexpr unsigned long fibonacci(unsigned int num) {
    return (num <= 1) ? num : (fibonacci(num - 1) + fibonacci(num - 2));
}


bool isSetBitCountEven(unsigned long num) {
    int bitCount = 0;
    while (num) {
        bitCount += num & 1;
        num >>= 1;
    }

    return bitCount % 2 == 0;
}


int main() {
    for (int i = 0; i <= 10; i++) {
        unsigned int fi = fibonacci(i);
        std::cout << "f(" << i << ") " << fi << ' ';
        if (isSetBitCountEven(fi)) {
            std::cout << "a un nombre pair de bits actif\n";
        } else {
            std::cout << "a un nombre impair de bits actif\n";
        }
    }

    return 0;
}