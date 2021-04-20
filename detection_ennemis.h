
//fonction de detection des ennemis par les tours
void detection() {
	int taille_zombie = zombies.size();
	int distance = 0;
	int y_tour = 0;
	int x_tour = 0;
	int y_mob = 0;
	int x_mob = 0;
	int distance_min = 0;

	//boucle for pour verifier tous les canons
	int taille_tour = canons.size();
	for (int i = 0; i < taille_tour; i++) {
		//on recherche une cible seulement si la tour n'en a pas
		if (canons[i]->get_cible() == NULL)
		{
			distance_min = 1000;
			//boucle for pour verifier tous les zombies
			for (int j = 0; j < taille_zombie; j++) {
				//on v�rifie que le zombie soit vivant pour le prendre pour cible
				if (zombies[j]->get_HP() > 0)
				{
					sf::Vector2i position_canon = canons[i]->get_position();
					sf::Vector2i position_mob = zombies[j]->get_position();
					y_tour = position_canon.y;
					x_tour = position_canon.x;
					y_mob = position_mob.y;
					x_mob = position_mob.x;
					distance = sqrt(pow((y_tour - y_mob), 2) + pow((x_tour - x_mob), 2));
					//on v�rifie que le zombie soit dans le rayon d'action de la tour
					if (distance <= canons[i]->get_portee() && distance < distance_min) {
						distance_min = distance;
						canons[i]->set_cible(zombies[j]);
						canons[i]->set_position_ennemi(j);
					}
				}

			}
			//si aucun zombie n'a �t� d�tect�, on met NULL en cible
			if (distance_min == 1000) {
				canons[i]->set_cible(NULL);
			}
		}

	}

	//boucle for pour verifier tous les canons de glace
	taille_tour = canons_glace.size();
	for (int i = 0; i < taille_tour; i++) {
		//comme pour les canons
		if (canons_glace[i]->get_cible() == NULL)
		{
			distance_min = 1000;
			for (int j = 0; j < taille_zombie; j++) {
				if (zombies[j] != NULL)
				{
					if (zombies[j]->get_HP() > 0)
					{
						sf::Vector2i position_canon_glace = canons_glace[i]->get_position();
						sf::Vector2i position_mob = zombies[j]->get_position();
						y_tour = position_canon_glace.y;
						x_tour = position_canon_glace.x;
						y_mob = position_mob.y;
						x_mob = position_mob.x;
						distance = sqrt(pow((y_tour - y_mob), 2) + pow((x_tour - x_mob), 2));
						if (distance <= canons_glace[i]->get_portee() && distance < distance_min) {
							distance_min = distance;
							canons_glace[i]->set_cible(zombies[j]);
							canons_glace[i]->set_position_ennemi(j);
						}
					}
				}


			}
			if (distance_min == 1000) {
				canons_glace[i]->set_cible(NULL);
			}
		}
	}

	//boucle for pour verifier tous les mortiers
	taille_tour = mortiers.size();
	for (int i = 0; i < taille_tour; i++) {
		//comme pour les canons
		if (mortiers[i]->get_cible() == NULL)
		{
			distance_min = 1000;
			for (int j = 0; j < taille_zombie; j++) {
				if (zombies[j] != NULL)
				{
					if (zombies[j]->get_HP() > 0)
					{
						sf::Vector2i position_mortier = mortiers[i]->get_position();
						sf::Vector2i position_mob = zombies[j]->get_position();
						y_tour = position_mortier.y;
						x_tour = position_mortier.x;
						y_mob = position_mob.y;
						x_mob = position_mob.x;
						distance = sqrt(pow((y_tour - y_mob), 2) + pow((x_tour - x_mob), 2));
						if (distance <= mortiers[i]->get_portee() && distance < distance_min) {
							distance_min = distance;
							mortiers[i]->set_cible(zombies[j]);
							mortiers[i]->set_position_ennemi(j);
						}
					}
				}


			}
			if (distance_min == 1000) {
				mortiers[i]->set_cible(NULL);
			}
		}
	}

	//boucle for pour verifier toutes les tours d'archers
	taille_tour = archers.size();
	for (int i = 0; i < taille_tour; i++) {
		//comme pour les canons
		if (archers[i]->get_cible() == NULL)
		{
			distance_min = 1000;
			for (int j = 0; j < taille_zombie; j++) {
				if (zombies[j] != NULL)
				{
					if (zombies[j]->get_HP() > 0)
					{
						sf::Vector2i position_archers = archers[i]->get_position();
						sf::Vector2i position_mob = zombies[j]->get_position();
						y_tour = position_archers.y;
						x_tour = position_archers.x;
						y_mob = position_mob.y;
						x_mob = position_mob.x;
						distance = sqrt(pow((y_tour - y_mob), 2) + pow((x_tour - x_mob), 2));
						if (distance <= archers[i]->get_portee() && distance < distance_min) {
							distance_min = distance;
							archers[i]->set_cible(zombies[j]);
							archers[i]->set_position_ennemi(j);
						}
					}
				}


			}
			if (distance_min == 1000) {
				archers[i]->set_cible(NULL);
			}
		}
	}
}