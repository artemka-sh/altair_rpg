#include "player.hpp"
#include "constants.hpp"

Player::Player(): Object()
{
    sf::Texture playerTexture = sf::Texture(AssetManager::GetTexture(DATA_PATH + "player.png"));
}

void Player::draw(sf::RenderWindow& window) 
{
    window.draw(rect);
}