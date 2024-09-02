#include <iostream>

#include "Vector2D.hpp"
#include "GameObject.hpp"


int main() {
    GameObject a(31.92, 0.59);
    std::cout << "a(" << a.getX() << ", " << a.getY() <<")\n";

    return 0;
}