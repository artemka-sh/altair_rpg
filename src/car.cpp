#include "car.hpp"

Car::Car()
{
    rect.setSize(sf::Vector2f(230, 100));
    rect.setPosition(sf::Vector2f(300,300));
    //rect.setTexture(&AssetManager::GetTexture(DATA_PATH + "/cars/" + "car_0.png"));
}

void Car::update()
{

}

void Car::draw()
{
    WindowManager::getWindow().draw(rect);
}