#pragma once
#include <SFML/Graphics.hpp>
#include "object.hpp"
#include "assetManager.hpp"
#include "windowManager.hpp"

class Background: public Object
{
    private:
        sf::RectangleShape rect;
    public:
        Background();
        void draw() override;
};