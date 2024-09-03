#include "Character.hpp"
#include "Weapon.hpp"
#include "Spear.hpp"


Spear::Spear(){
    this->range = 2;
    this->power = 2;
}
Spear::~Spear() {}
void Spear::attack(Character& target) {}