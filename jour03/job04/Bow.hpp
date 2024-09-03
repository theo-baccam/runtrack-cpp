#pragma once

#include "Character.hpp"
#include "Weapon.hpp"


class Bow : public Weapon {
     Bow();
     ~Bow();

     void attack(Character &target) override;
};