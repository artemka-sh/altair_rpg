#pragma once
#include <SFML/Graphics.hpp>
#include "object.hpp"
#include "assetManager.hpp"
#include "windowManager.hpp"
#include <string>

class Effect: Object
{
private:
    sf::RectangleShape rect;
public:
    Effect(const std::string &filename, const sf::Vector2f&);
    void update();
    void draw();
};