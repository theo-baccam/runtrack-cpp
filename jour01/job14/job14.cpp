#include <iostream>
#include <cmath>


int main() {
    int N;
    std::cout << "Veuillez donner un entier: ";
    std::cin >> N;

    int i = 5;
    int sum = pow(i, 3);
    while (i != N) {
        if (i < N) {
            i++;
        } else if (i > N) {
            i--;
        }
        sum += pow(i, 3);
    };

    std::cout << "La somme de 5^3 a " << N << "^3 est " << sum << '\n';

    return 0;
}