#pragma once

#include "Character.hpp"
#include "Weapon.hpp"


class Sword : public Weapon {
     Sword();
     ~Sword();

     void attack(Character &target) override;
};