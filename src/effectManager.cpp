#include "effectManager.hpp"
#include <assert.h>
#include "windowManager.hpp"
#include <iostream>

EffectManager* EffectManager::sInstance = nullptr;

EffectManager::EffectManager()
{

    assert(sInstance == nullptr);
    sInstance = this;
}

void EffectManager::newEffect(const std::string &filename, sf::Vector2f pos, int time)
{
    auto& effMap = sInstance->m_Effects;
    effMap.push_back(new std::pair<Effect, int>(Effect(filename, pos), time));
}

void EffectManager::update()
{
    auto& effMap = sInstance->m_Effects;
    for(auto iter = effMap.begin(); iter != effMap.end(); iter++)
    {
        std::cout << (*iter)->second << std::endl;
        if((*iter)->second <= 0)
        {
            if(true)
            {
                effMap.erase(iter);
                std::cout <<"объект удалён" << std::endl;
                break;
            }
        }
        else
        {
            (*iter)->second--;
            (*iter)->first.update();
            
        }    
    }
}

void EffectManager::draw()
{
    auto& effMap = sInstance->m_Effects;
    for(auto iter = effMap.begin(); iter != effMap.end(); iter++)
    {
        (*iter)->first.draw();
        
    }
}


//Assetmanager manager;
//sf::Sprite sprite1 = sf::Sprite(EffectManager::GetTexture("myTexture1.png"));
