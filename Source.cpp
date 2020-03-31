#include <SFML/Graphics.hpp>
#include "Character.h"

using namespace sf;
typedef Keyboard::Key EKey;

int main()
{
    RenderWindow window(VideoMode(200, 200), "Game");

    //Character rshape(Vector2f(2, 2), Color::Green, 1);
    Vector2f shape(5, 5);
    Vector2f position;

    sf::RectangleShape rshape(shape);
    rshape.setFillColor(Color::Blue);
    rshape.setOutlineColor(Color::Green);
    rshape.setOutlineThickness(1);
    rshape.setPosition({ 50,50 });

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        } 

        rshape.setPosition(position);

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

        window.clear(Color(10,10,100,255));
        window.draw(rshape);
        window.display();
    }


    return 0;
}