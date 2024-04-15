#pragma once
#include <SFML/Graphics.hpp>
#include "object.hpp"
//#include "assetManager.hpp"

class Player: Object
{
    private:
        sf::RectangleShape rect;
        sf::Texture playerTexture;
    public:
        Player(): Object()
        {

        }
        // void Player::draw(sf::RenderWindow& window) override;
};