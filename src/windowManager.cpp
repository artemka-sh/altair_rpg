#include "windowManager.hpp"
#include <assert.h>


WindowManager* WindowManager::sInstance = nullptr;

WindowManager::WindowManager(): window(sf::VideoMode(screenSize.x, screenSize.y), "Altair game")
{

    assert(sInstance == nullptr);
    sInstance = this;
}

sf::RenderWindow& WindowManager::getWindow()
{
    return sInstance->window;
}

//Assetmanager manager;
//sf::Sprite sprite1 = sf::Sprite(WindowManager::GetTexture("myTexture1.png"));
