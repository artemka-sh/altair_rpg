#include "scale.hpp"

Scale::Scale(const sf::Vector2f& position, float max_value): 
m_maxValue(max_value), 
m_position(position),
Object()
{
    m_rectShape.setPosition(m_position);
    m_currentValue = max_value;
    m_rectShape.setSize({25, m_maxValue});
    m_rectShape.setFillColor(BROWN);
    m_rectShape.setOutlineThickness(5);
    m_rectShape.setOutlineColor(sf::Color::Black); 
}

void Scale::setCurrentValue(float value) 
{
    m_currentValue = value;
}

auto Scale::getCurrentValue() const 
{
    return m_currentValue;
}

void Scale::decreaseValue(float value) 
{
    if (m_currentValue > 0.f)
    {
        m_currentValue -= value;
    }
    else
    {
        std::cout << "you win" << std::endl;
    }
}

bool Scale::isFilled() const 
{
    return m_currentValue >= m_maxValue;
}

void Scale::setActionState(bool state)
{
    actionState = state;
}

void Scale::draw()
{
    WindowManager::getWindow().draw(m_rectShape);
}

void Scale::update()
{
    if(actionState)
        decreaseValue(1);
    m_rectShape.setSize(sf::Vector2f(25, m_currentValue));
}
