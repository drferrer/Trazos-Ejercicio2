#include "Character.h"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

using namespace sf;
typedef Keyboard::Key EKey;

Character::Character(sf::Vector2f size, sf::Color color, float velocity)
{
    m_sprite = new sf::RectangleShape(size);
}

Character::~Character() 
{
	delete m_sprite;
}

void Character::update() 
{

}

/*void Character::movement() 
{
    Vector2f position;
    m_position = new sf::setPosition(position);
    m_position.setPosition(position);

    if (Keyboard::isKeyPressed(EKey::Right))
    {
        position.x += 1;
    }
    else if (Keyboard::isKeyPressed(EKey::Left))
    {
        position.x -= 1;
    }
    else if (Keyboard::isKeyPressed(EKey::Up))
    {
        position.y += 1;
    }
    else if (Keyboard::isKeyPressed(EKey::Down))
    {
        position.y += 1;
    }
}*/