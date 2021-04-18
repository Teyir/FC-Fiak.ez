

void detection() {
	int taille_zombie = zombies.size();
	int distance = 0;
	int y_tour = 0;
	int x_tour = 0;
	int y_mob = 0;
	int x_mob = 0;
	int distance_min = 0;

	int taille_tour = canons.size();
	for (int i = 0; i < taille_tour; i++) {
		distance_min = 1000;
		for (int j = 0; j < taille_zombie; j++) {
			sf::Vector2i position_canon = canons[i]->get_position();
			sf::Vector2i position_mob = zombies[j]->get_position();
			y_tour = position_canon.y;
			x_tour = position_canon.x;
			y_mob = position_mob.y;
			x_mob = position_mob.x;
			distance = sqrt(pow((y_tour - y_mob), 2) + pow((x_tour - x_mob), 2));
			if (distance <= canons[i]->get_portee() && distance < distance_min) {
				canons[i]->set_cible(zombies[i]);
			}
		}
	}

	taille_tour = canons_glace.size();
	for (int i = 0; i < taille_tour; i++) {
		distance_min = 1000;
		for (int j = 0; j < taille_zombie; j++) {
			sf::Vector2i position_canon_glace = canons_glace[i]->get_position();
			sf::Vector2i position_mob = zombies[j]->get_position();
			y_tour = position_canon_glace.y;
			x_tour = position_canon_glace.x;
			y_mob = position_mob.y;
			x_mob = position_mob.x;
			distance = sqrt(pow((y_tour - y_mob), 2) + pow((x_tour - x_mob), 2));
			if (distance <= canons_glace[i]->get_portee() && distance < distance_min) {
				canons[i]->set_cible(zombies[i]);
			}
		}
	}

	taille_tour = mortiers.size();
	for (int i = 0; i < taille_tour; i++) {
		distance_min = 1000;
		for (int j = 0; j < taille_zombie; j++) {
			sf::Vector2i position_mortier = mortiers[i]->get_position();
			sf::Vector2i position_mob = zombies[j]->get_position();
			y_tour = position_mortier.y;
			x_tour = position_mortier.x;
			y_mob = position_mob.y;
			x_mob = position_mob.x;
			distance = sqrt(pow((y_tour - y_mob), 2) + pow((x_tour - x_mob), 2));
			if (distance <= mortiers[i]->get_portee() && distance < distance_min) {
				canons[i]->set_cible(zombies[i]);
			}
		}
	}

	taille_tour = archers.size();
	for (int i = 0; i < taille_tour; i++) {
		distance_min = 1000;
		for (int j = 0; j < taille_zombie; j++) {
			sf::Vector2i position_archers = archers[i]->get_position();
			sf::Vector2i position_mob = zombies[j]->get_position();
			y_tour = position_archers.y;
			x_tour = position_archers.x;
			y_mob = position_mob.y;
			x_mob = position_mob.x;
			distance = sqrt(pow((y_tour - y_mob), 2) + pow((x_tour - x_mob), 2));
			if (distance <= archers[i]->get_portee() && distance < distance_min) {
				canons[i]->set_cible(zombies[i]);
			}
		}
	}
}