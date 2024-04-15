#include "game.hpp"

Game::Game(): window(sf::VideoMode(500, 600), "Altair game")
{

}

void Game::events()
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();


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

}

void Game::run()
{
    while (window.isOpen())
    {
        events();
        update();
        render();
        dt = deltaClock.restart().asSeconds();
    }
}