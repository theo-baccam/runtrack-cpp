#include "Character.hpp"
#include "Weapon.hpp"
#include "Sword.hpp"


Sword::Sword(){
    this->range = 1;
    this->power = 4;
}
Sword::~Sword() {}
void Sword::attack(Character& target) {}