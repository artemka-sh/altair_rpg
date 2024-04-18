#pragma once
#include <SFML/Graphics.hpp>
#include "object.hpp"
#include "assetManager.hpp"
#include "windowManager.hpp"

class Player: Object
{
    private:
        sf::RectangleShape rect;
        sf::Texture playerTexture;
    public:
        Player();
        void draw() override;
};