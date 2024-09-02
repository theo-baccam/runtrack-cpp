#include "Vector2D.hpp"


Vector2D::Vector2D(double x, double y) {
    this->x = x;
    this->y = y;
}
Vector2D::~Vector2D() {}

double Vector2D::getX() {return this->x;}
double Vector2D::getY() {return this->y;}
void Vector2D::setX(double x) {this->x = x;}
void Vector2D::setY(double y) {this->y = y;}

Vector2D Vector2D::operator+(Vector2D &vec) {
    Vector2D newVec(this->x + vec.getX(), this->y + vec.getY());
    return newVec;
}

Vector2D Vector2D::operator-(Vector2D &vec) {
    Vector2D newVec(this->x - vec.getX(), this->y - vec.getY());
    return newVec;
}

double Vector2D::distance(Vector2D &vec) {
    double x1;
    double y1;
    double x2;
    double y2;

    if (vec.getX() > this->x) {
        x1 = this->x;
        x2 = vec.getX();
    } else {
        x1 = vec.getX();
        x2 = this->x;
    }

    if (vec.getY() > this->y) {
        y1 = this->y;
        y2 = vec.getY();
    } else {
        y1 = vec.getY();
        y2 = this->y;
    }

    return std::sqrt(std::pow(x2 + x1, 2) + std::pow(y2 + y1, 2));
}