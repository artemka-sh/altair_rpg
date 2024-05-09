#pragma once
#include <SFML/Graphics.hpp>
#include "windowManager.hpp"
#include "object.hpp"
#include "constants.hpp"
#include "iostream"

class Scale: public Object{
private:
    bool actionState = false;
    float m_maxValue;
    float m_currentValue;
    sf::Vector2f m_position;
    sf::RectangleShape m_rectShape; 
public:
    Scale(const sf::Vector2f& position, float max_value);
    void setCurrentValue(float value);
    auto getCurrentValue() const;
    void decreaseValue(float value);
    bool isFilled() const;
    void update();
    void setActionState(bool state);
    void draw() override;
};