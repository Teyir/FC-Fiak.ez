#include <SFML/Graphics.hpp>
#include <iostream>

// Headers
/*

    #include "class_tours.h"
    #include "class_ennemis.h"
    #include "vague.h"
    #include "joueur.h"
    #include "forteresse.h"

*/

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "ça fonctionne !");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}