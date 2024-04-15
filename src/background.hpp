#pragma once
#include <SFML/Graphics.hpp>
#include "object.hpp"
#include "assetManager.hpp"

class Background: Object
{
    private:
        sf::RectangleShape rect;
        sf::Texture backgroundTexture;
    public:
        Background();
        void draw(sf::RenderWindow& window) override;
};