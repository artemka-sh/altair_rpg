#pragma once

#include <SFML/Graphics.hpp>
#include "object.hpp"
#include "assetManager.hpp"
#include "player.hpp"
#include "background.hpp"
#include "constants.hpp"

class Game
{
public:
    void run();
    Game();
private:
    sf::Vector2f screenSize = DEFAULT_SCREEN_SIZE;
    sf::RenderWindow window;
    AssetManager manager;
    sf::Clock deltaClock;
    Background background;
    
    float dt;
    void update();
    void events();
    void render();
private:
};