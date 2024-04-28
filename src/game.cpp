#include "game.hpp"

Game::Game()
{
    Objects["player"] = new Player();
    Objects["antagonist"] = new Antagonist();
    Objects["background"] = new Background();
    Objects["scale"] = new Scale(sf::Vector2f(10, 10), 30);

    player = static_cast<Player*>(Objects["player"]);
    background = static_cast<Background*>(Objects["background"]);
    antagonist = static_cast<Antagonist*>(Objects["antagonist"]);
    scale = static_cast<Scale*>(Objects["scale"]);

    player->setSize(sf::Vector2f(100, 100));
    player->setPosition(sf::Vector2f(570, 450));

    antagonist->setSize(sf::Vector2f(100, 100));
    antagonist->setPosition(sf::Vector2f(180, 450));
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
    antagonist->update();
    EffectManager::update();
}

void Game::render()
{
    WindowManager::getWindow().clear();  
    background->draw();
    EffectManager::draw();
    player->draw();
    antagonist->draw();
    scale->draw();
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