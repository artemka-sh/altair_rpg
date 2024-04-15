#include "background.hpp"

Background::Background(): Object()
{
    rect.setSize(sf::Vector2f(50, 50));
    // sf::Texture backgroundTexture = sf::Texture(AssetManager::GetTexture("data/background.png"));
    // rect.setTexture(&backgroundTexture);
}

void Background::draw(sf::RenderWindow& window) 
{
    window.draw(rect);
}