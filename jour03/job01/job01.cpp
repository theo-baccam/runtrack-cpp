#include <iostream>

#include "Vector2D.hpp"


int main() {
    Vector2D a(0, 0);
    Vector2D b(1, 0);
    Vector2D c(0, -1);
    Vector2D d = b + c;

    std::cout
        << "a(" << a.getX() << ", " << a.getY() << ")\n"
        << "b(" << b.getX() << ", " << b.getY() << ")\n"
        << "c(" << c.getX() << ", " << c.getY() << ")\n"
        << "d(" << d.getX() << ", " << d.getY() << ")\n";

    std::cout
        << "a -> b: " << a.distance(b) << '\n'
        << "a -> c: " << a.distance(c) << '\n'
        << "b -> c: " << b.distance(c) << '\n'
        << "a -> d: " << a.distance(d) << '\n';

    a.setX(31.82);
    b.setY(-12.012);
    c.setX(-4.51);
    d.setY(9.99);
    Vector2D e = c - d;

    std::cout
        << "a(" << a.getX() << ", " << a.getY() << ")\n"
        << "b(" << b.getX() << ", " << b.getY() << ")\n"
        << "c(" << c.getX() << ", " << c.getY() << ")\n"
        << "d(" << d.getX() << ", " << d.getY() << ")\n"
        << "e(" << e.getX() << ", " << e.getY() << ")\n";

    std::cout
        << "a -> b: " << a.distance(b) << '\n'
        << "a -> c: " << a.distance(c) << '\n'
        << "b -> c: " << b.distance(c) << '\n'
        << "a -> d: " << a.distance(d) << '\n'
        << "a -> e: " << a.distance(e) << '\n';

    return 0;
}