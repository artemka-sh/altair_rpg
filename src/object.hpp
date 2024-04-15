#pragma once
#include <SFML/Graphics.hpp>

class Object
{
public:
    Object();
private:
    sf::Vector2f position;
    sf::Vector2f size;
    virtual void draw(sf::RenderWindow& window);
    
private:
};