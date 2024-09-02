#pragma once


#include "Vector2D.hpp"
#include "GameObject.hpp"


class Decor : public GameObject{
    public:
        Decor();
        Decor(double x, double y);
        ~Decor();

        void update() override;
};