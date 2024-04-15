#include "player.hpp"

Player::Player(): Object()
{
    sf::Texture playerTexture = sf::Texture(AssetManager::GetTexture("myTexture1.png"));
}

void Player::draw(sf::RenderWindow& window) 
{
    window.draw(rect);
}