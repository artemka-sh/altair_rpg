#include "antagonist.hpp"

Antagonist::Antagonist(): Player()
{
    
    rect.setTexture(&AssetManager::GetTexture(DATA_PATH + "bad.png"));
    auto newColor = rect.getFillColor();
    newColor.r -= newColor.r / 2;
    newColor.g -= newColor.g / 2;
    newColor.b -= newColor.b / 2;
    rect.setFillColor(newColor);
}