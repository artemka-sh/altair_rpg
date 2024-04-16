#include "background.hpp"
#include "constants.hpp"
Background::Background(): Object()
{
    rect.setSize(sf::Vector2f(50, 50));
    //backgroundTexture = AssetManager::GetTexture("data/background.png");
    backgroundTexture = sf::Texture(AssetManager::GetTexture("data/background.png"));
    // rect.setTexture(&backgroundTexture);
}

void Background::draw(sf::RenderWindow& window) 
{
    window.draw(rect);
}