#include "game.hpp"

Game::Game()
{

}

void Game::events()
{
    sf::Event event;
    while (WindowManager::getWindow().pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            WindowManager::getWindow().close();


        // if (event.type == sf::Event::EventType::KeyPressed && 
        // event.key.code == sf::Keyboard::Space)
        // {

        // }

    }

}

void Game::update()
{
    
}

void Game::render()
{
    background.draw();
    WindowManager::getWindow().display();
}

void Game::run()
{
    while (WindowManager::getWindow().isOpen())
    {
        events();
        update();
        render();
        dt = deltaClock.restart().asSeconds();
    }
}