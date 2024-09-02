#include "GameObject.hpp"


GameObject::GameObject() : Vector2D() {}
GameObject::GameObject(double x, double y) : Vector2D(x, y) {}
GameObject::~GameObject() {}

void GameObject::draw() {}
void GameObject::update() {}