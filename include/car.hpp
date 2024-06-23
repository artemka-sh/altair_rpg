#pragma once
#include <SFML/Graphics.hpp>
#include "assetManager.hpp"
#include "windowManager.hpp"
#include "constants.hpp"
#include "object.hpp"

class Car: public Object
{
protected:
    sf::RectangleShape rect;
    sf::Vector2f movement;
    float speed = CAR_DEFAULT_SPEED;
public:
    Car(sf::Vector2f startPosition, sf::Vector2f _movement, float _speed = CAR_DEFAULT_SPEED);
    void update(float dt);
    void draw() override;
};