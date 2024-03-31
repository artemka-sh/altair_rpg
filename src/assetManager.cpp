#include "assetManager.hpp"
#include <assert.h>

AssetManager::AssetManager()
{
    //один экземпляр
    assert(sInstance == nullptr);
    sInstance = this;

}

sf::Texture& AssetManager:: GetTexture(std::string const& filename)
{
    auto& texMap = sInstance->m_Textures;
    auto pairFound = texMap.find(filename);

    if(pairFound != texMap.end())
    {
        return pairFound->second;
    }
    else
    {
        auto& texture = texMap[filename];
        texture.loadFromFile(filename);
        return texture;
    }
}

//Assetmanager manager;
//sf::Sprite sprite1 = sf::Sprite(AssetManager::GetTexture("myTexture1.png"));
