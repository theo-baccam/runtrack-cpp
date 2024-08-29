#include <iostream>


bool isSetBitCountEven(int num) {
    int bitCount = 0;
    while (num) {
        bitCount += num & 1;
        num >>= 1;
    }

    return !(bitCount & 1);
}

int main() {
    int num;
    std::cout << "Veuillez donner un entier: ";
    std::cin >> num;
    if (isSetBitCountEven(num)) {
        std::cout << num << " a un nombre pair de bits actifs\n";
    } else {
        std::cout << num << " a un nombre impair de bits actifs\n";
    }
    
    return 0;
}