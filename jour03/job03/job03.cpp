#include <iostream>

#include "Vector2D.hpp"
#include "GameObject.hpp"
#include "Decor.hpp"
#include "Character.hpp"


int main() { 
    Decor bush(2, 0);

    Character johnDoe(5.5, 0.5, "John Doe", 20);
    std::cout << johnDoe.isAlive() << '\n';

    return 0;
}