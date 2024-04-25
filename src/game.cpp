#include "game.hpp"

Game::Game()
{
    Objects["player"] = new Player();
    Objects["background"] = new Background();

    player = static_cast<Player*>(Objects["player"]);
    background = static_cast<Background*>(Objects["background"]);

    player->setSize(sf::Vector2f(100, 100));
    player->setPosition(sf::Vector2f(100, 400));
    WindowManager::getWindow().setFramerateLimit(FRAMERATE_LIMIT);
}

Game::~Game()
{
    Objects.clear();
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
            player->setAction(true);
        }
        if (event.type == sf::Event::EventType::KeyReleased && 
        event.key.code == sf::Keyboard::Space)
        {
            player->setAction(false);
        }

    }

}

void Game::update()
{
    player->update();
    EffectManager::update();
}

void Game::render()
{
    WindowManager::getWindow().clear();  
    background->draw();
    EffectManager::draw();
    player->draw();
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