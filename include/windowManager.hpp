#pragma once
#include <SFML/Graphics.hpp>
#include "constants.hpp"

class WindowManager
{
private:
    
    static WindowManager* sInstance;
    sf::Vector2f screenSize = DEFAULT_SCREEN_SIZE;
public:
    sf::RenderWindow window;
    WindowManager();
    static sf::RenderWindow& getWindow();

};
