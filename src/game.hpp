#pragma once

#include <SFML/Graphics.hpp>
#include <map>
#include "windowManager.hpp"
#include "object.hpp"
#include "assetManager.hpp"
#include "player.hpp"
#include "antagonist.hpp"
#include "background.hpp"
#include "constants.hpp"
#include "effectManager.hpp"
#include "scale.hpp"

class Game
{
public:
    void run();
    Game();
    ~Game();
private:
    WindowManager window;
    AssetManager assets;
    EffectManager effects;
    sf::Clock deltaClock;
    std::map<std::string, Object*> Objects;
    Player* player;
    Antagonist* antagonist;
    Background* background;
    Scale* scale;
    float dt;
    void update();
    void events();
    void render();
private:
};