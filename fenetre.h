#pragma once


void Window() {
    window.create(sf::VideoMode(LARGEUR, HAUTEUR), "FC-Fiak | Tower defense");


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


    window.setPosition(sf::Vector2i(300, 70));    //150
    window.setFramerateLimit(60);

    int speed_animation = 0;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        creation_tour();


        affichage_tours();
        window.display();
        window.clear();
    }
}
