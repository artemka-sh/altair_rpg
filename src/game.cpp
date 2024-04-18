#include "game.hpp"

Game::Game()
{
    player.setSize(sf::Vector2f(100, 100));
    player.setPosition(sf::Vector2f(100, 400));
}

void Game::events()
{
    sf::Event event;
    while (WindowManager::getWindow().pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            WindowManager::getWindow().close();


        if (event.type == sf::Event::EventType::KeyPressed && 
        event.key.code == sf::Keyboard::Space)
        {
            player.setAction(true);
        }
        if (event.type == sf::Event::EventType::KeyReleased && 
        event.key.code == sf::Keyboard::Space)
        {
            player.setAction(false);
        }

    }

}

void Game::update()
{
    player.update();
}

void Game::render()
{
    background.draw();
    player.draw();
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