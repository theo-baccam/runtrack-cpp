#pragma once

#include "Character.hpp"


class Weapon {
    public:
        Weapon();
        ~Weapon();

        int range;
        int power;

        virtual void attack(Character &target);
};