#include <SFML/Graphics.hpp>

class Game
{
public:
    void run();
private:
    void update();
    void event();
    void render();
private:
};

int main()
{
    sf::RenderWindow(sf::VideoMode(500, 600), "Altair game");
    
    return 0;
}