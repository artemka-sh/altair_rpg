#include "car.hpp"

Car::Car(sf::Vector2f startPosition, sf::Vector2f _movement, float _speed):
movement(_movement),
speed(_speed)
{
    rect.setSize(sf::Vector2f(230, 150));
    rect.setPosition(startPosition);
    rect.setOrigin(rect.getSize() / 2.0f);
    rect.setTexture(&AssetManager::GetTexture(DATA_PATH + "cars/" + "car_0.png"));
    rect.setScale(-1.0f, 1.0f);
}

void Car::update(float dt)
{
    rect.move(speed * movement * dt);
}

void Car::draw()
{
    WindowManager::getWindow().draw(rect);
}