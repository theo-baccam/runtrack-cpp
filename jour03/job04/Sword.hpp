#pragma once

#include "Character.hpp"
#include "Weapon.hpp"


class Spear : public Weapon {
     Spear();
     ~Spear();

     void attack(Character &target) override;
};