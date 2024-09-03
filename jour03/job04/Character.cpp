#include "Vector2D.hpp"
#include "GameObject.hpp"
#include "Character.hpp"


Character::Character() : GameObject() {
    this->name = "";
    this->healthPoints = 1;
}
Character::Character(double x, double y) : GameObject(x, y) {
    this->name = "";
    this->healthPoints = 1;
}
Character::Character(
    double x,
    double y,
    std::string name,
    int healthPoints
) : GameObject(x, y) {
    this->name = name;
    this->healthPoints = healthPoints;
}
Character::~Character() {}

void Character::update() {
    this->y += 0.5;
}
void Character::draw() {
    // drawImage("path/to/sprite.png");
}

bool Character::isAlive() {
    return this->healthPoints > 0;
}