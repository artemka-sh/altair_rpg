#pragma once
#include <SFML/Graphics.hpp>
#include "constants.hpp"
#include "object.hpp"

class Car: public Object
{
protected:
    sf::RectangleShape rect;
    float speed = CAR_DEFAULT_SPEED;
public:
    Car();
    void update();
    void draw() override;
};