#include "scale.hpp"

Scale::Scale(const sf::Vector2f& position, float max_value): 
m_maxValue(max_value), 
m_position(position),
Object()
{
    m_currentValue = 0.f;
    m_rectShape.setSize({100, 100});
    m_rectShape.setFillColor(sf::Color::Green); 
}

void Scale::setCurrentValue(float value) 
{
    m_currentValue = value;
}

auto Scale::getCurrentValue() const 
{
    return m_currentValue;
}

void Scale::decreaseValue() 
{
    if (m_currentValue > 0.f)
    {
        m_currentValue -= 0.1f;
    }
}

bool Scale::isFilled() const 
{
    return m_currentValue >= m_maxValue;
}

void Scale::draw()
{
    WindowManager::getWindow().draw(m_rectShape);
}