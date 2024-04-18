#include "player.hpp"
#include "constants.hpp"
#include <iostream>
Player::Player(): Object()
{
    rect.setOrigin(size.x/2.0f, size.y/2.0f);
    std::cout << size.x << " " << size.y << std::endl;
    rect.setTexture(&AssetManager::GetTexture(DATA_PATH + "player.png"));
}

void Player::update()
{
    if(actionState)
    {
        rect.rotate(0.5);
        fart();
    }
}

void Player::draw() 
{
    WindowManager::getWindow().draw(rect);
}

void Player::setSize(const sf::Vector2f & size)
{
    this->size = size;
    rect.setSize(size);
    rect.setOrigin(size/2.0f);
}

void Player::setPosition(const sf::Vector2f & position)
{
    this->position = position;
    rect.setPosition(position);
}

void Player::setAction(bool state)
{
    actionState = state;
}

void Player::fart()
{
    
}