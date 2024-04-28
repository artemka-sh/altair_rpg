#pragma once
#include <SFML/Graphics.hpp>
#include "windowManager.hpp"
#include "object.hpp"

class Scale: public Object{
private:
    float m_maxValue;
    float m_currentValue;
    sf::Vector2f m_position;
    sf::RectangleShape m_rectShape; 
public:
    Scale(const sf::Vector2f& position, float max_value);
    void setCurrentValue(float value);
    auto getCurrentValue() const;
    void decreaseValue();
    bool isFilled() const;
    void draw() override;
};