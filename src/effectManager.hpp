#pragma once
#include <SFML/Graphics.hpp>
#include "constants.hpp"
#include "effect.hpp"
#include <string>
#include <vector>
#include <utility>

class EffectManager
{
private:
    static EffectManager* sInstance;
    std::vector<std::pair<Effect, int>*> m_Effects;
public:
    EffectManager();
    static void newEffect(const std::string &filename, sf::Vector2f pos, int time);
    static void update();
    static void draw();
};
