#include "Vector2D.hpp"
#include "GameObject.hpp"
#include "Decor.hpp"


Decor::Decor() : GameObject() {}
Decor::Decor(double x, double y) : GameObject(x, y) {}
Decor::~Decor() {}

void Decor::update() {}