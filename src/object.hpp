#pragma once
#include <SFML/Graphics.hpp>

class Object
{
public:
    Object(){}
protected:
    sf::Vector2f position;
    sf::Vector2f size;
    virtual void draw() = 0;
    
private:
};