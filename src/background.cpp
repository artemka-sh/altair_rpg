#include "background.hpp"
#include "constants.hpp"

Background::Background(): Object()
{
    rect.setSize(sf::Vector2f(WindowManager::getWindow().getSize()));
    rect.setTexture(&AssetManager::GetTexture(DATA_PATH + "small_b.png"));
}

void Background::draw() 
{
    WindowManager::getWindow().draw(rect);
}