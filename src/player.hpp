#pragma once
#include <SFML/Graphics.hpp>
#include "object.hpp"
#include "assetManager.hpp"
#include "windowManager.hpp"
#include "effectManager.hpp"

class Player: Object
{
    private:
        sf::RectangleShape rect;
        bool actionState = false;

    public:
        
        Player();
        void update();
        void fart();
        void draw() override;
        void setSize(const sf::Vector2f&);
        void setPosition(const sf::Vector2f&);
        void setAction(bool);
};