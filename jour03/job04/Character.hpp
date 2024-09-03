#pragma once

#include <string>

#include "Vector2D.hpp"
#include "GameObject.hpp"


class Character : public GameObject {
    public:
        Character();
        Character(double x, double y);
        Character(double x, double y, std::string name, int healthPoints);
        ~Character();

        void update() override;
        void draw() override;

        std::string name;
        int healthPoints;
        bool isAlive();
};