#pragma once

#include <SFML/Graphics.hpp>
#include "windowManager.hpp"
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
    WindowManager window;
    AssetManager manager;
    sf::Clock deltaClock;
    Background background;
    float dt;
    void update();
    void events();
    void render();
private:
};