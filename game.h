#pragma once
#include <SFML/Graphics.hpp>

#define mainloop

class game {
	static game* instance;

	sf::RenderWindow window;
	sf::Event evnt;
	sf::Font font;
	sf::Image icon;


	public:

		void run();

		static game* getInstance();
};