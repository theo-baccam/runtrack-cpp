#pragma once

#include "Vector2D.hpp"


class GameObject : public Vector2D {
    public:
        GameObject();
        GameObject(double x, double y);
        ~GameObject();

        virtual void draw();
        virtual void update();
};