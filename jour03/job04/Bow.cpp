#include "Character.hpp"
#include "Weapon.hpp"
#include "Bow.hpp"


Bow::Bow(){
    this->range = 4;
    this->power = 1;
}
Bow::~Bow() {}
void Bow::attack(Character& target) {}