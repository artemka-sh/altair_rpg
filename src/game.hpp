#pragma once

#include <SFML/Graphics.hpp>
#include "object.hpp"
#include "assetManager.hpp"

class Game
{
public:
    void run();
    Game();
private:
    sf::RenderWindow window;
    sf::Clock deltaClock;
    float dt;
    void update();
    void events();
    void render();
private:
};