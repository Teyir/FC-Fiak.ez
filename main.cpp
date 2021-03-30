#include <SFML/Graphics.hpp>
#include <iostream>
#include "mainmenu.h"


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


    // D�finition de la fen�tre (taille + titre)
    sf::RenderWindow window(sf::VideoMode(800, 600), "FC-Fiak | Menu Principal");

 
    // Gestion de l'icone
    sf::Image icon;

    if (!icon.loadFromFile("ressources/img/icone.png")) 
    {
        EXIT_FAILURE;
    }
        
    window.setIcon(93, 98, icon.getPixelsPtr());

    // Gestion de la police 

    sf::Font font;
    if (!font.loadFromFile("ressources/Hiatus.ttf"))
    {
        EXIT_FAILURE;
    }

    sf::Text text;
    text.setFont(font);
    text.setString("FC-Fiak");
    text.setCharacterSize(50);
    text.setFillColor(sf::Color::Red);
    text.setStyle(sf::Text::Bold );

    sf::Vector2f pos = text.getPosition();
    text.setPosition(pos.x + 340, pos.y + 5);






    // On limite les fps
    window.setFramerateLimit(30);

    //Cette boucle permet de dire que si la fen�tre est toujours ouvert le programme tourne
    while (window.isOpen())
    {
 
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Si on ferme la fen�tre �a stop le programme
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);

        window.draw(text);

        window.display();
    }
        

    return 0;
}