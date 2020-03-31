#pragma once
#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics.hpp>

class RectangleShape;

class Character : sf::Drawable
{
public:
	Character(sf::Vector2f size, sf::Color color, float velocity);
	~Character();

	void update();
	//void movement();

private:
	sf::RectangleShape* m_sprite;
	sf::Vector2f m_position;
	float velocity;
};