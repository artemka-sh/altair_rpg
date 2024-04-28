#include "effect.hpp"

Effect::Effect(const std::string &filename, const sf::Vector2f &pos)
{
    rect.setOrigin(size.x/2.0f, size.y/2.0f);
    rect.setPosition(pos);
    rect.setTexture(&AssetManager::GetTexture(filename));
    rect.setSize(sf::Vector2f(200,200));
}

void Effect::update()
{

}

void Effect::draw()
{
    WindowManager::getWindow().draw(rect);
}
