
//class pour les dif�rents �nnemi et leurs composition
class Zombie {
private:
    //Composition de l'ennemi
    int HP;
    int Degat;
    int vitesse;
    int pieces;
    sf::Vector2i position;
public:
    Zombie(int x, int y);
    void prendre_degats(int nb_degats);
    //position de l'�nnemi
    sf::Vector2i get_position() {
        return this->position;
    }
    void emplacement(int x, int y);
    //getteurs
    int get_HP() {
        return this->HP;
    }
    int get_pieces() {
        return this->pieces;
    }
    int get_vitesse() {
        return this->vitesse;
    }


};
//constructeur Zombie (utilit�/20 du commentaire)
Zombie::Zombie(int x, int y) {
    this->HP = 50;
    this->Degat = 2;
    this->vitesse = 3;
    this->pieces = 10;
    this->position.x = x;
    this->position.y = y;
}
//Le nom de la fonction le d�crits bien, non ?
void Zombie::prendre_degats(int nb_degats) {
    this->HP -= nb_degats;
}
//cette fonction TRES complexe permet alors la r�cuperation des Coordon�es Gps via un Satellite, ah non juste les coordonn�es du Zombie
void Zombie::emplacement(int x, int y) {

    this->position.x = x;
    this->position.y = y;
}



class Tank {
private:
    int HP;
    int Degat;
    int vitesse;
    int pieces;
    sf::Vector2i position;
public:
    Tank(int x, int y);
    void prendre_degats(int nb_degats);
    sf::Vector2i get_position() {
        return this->position;
    }
    void emplacement(int x, int y);
    int get_HP() {
        return this->HP;
    }
    int get_pieces() {
        return this->pieces;
    }
    int get_vitesse() {
        return this->vitesse;
    }
};

Tank::Tank(int x, int y) {
    this->HP = 100;
    this->Degat = 4;
    this->vitesse = 2;
    this->pieces = 40;
    this->position.x = x;
    this->position.y = y;
}

void Tank::prendre_degats(int nb_degats) {
    this->HP -= nb_degats;
}

void Tank::emplacement(int x, int y) {

    this->position.x = x;
    this->position.y = y;
}



class Runner {
private:
    int HP;
    int Degat;
    int vitesse;
    int pieces;
    sf::Vector2i position;
public:
    Runner(int x, int y);
    void prendre_degats(int nb_degats);
    sf::Vector2i get_position() {
        return this->position;
    }
    void emplacement(int x, int y);
    int get_HP() {
        return this->HP;
    }
    int get_pieces() {
        return this->pieces;
    }
    int get_vitesse() {
        return this->vitesse;
    }
};

Runner::Runner(int x, int y) {
    this->HP = 30;
    this->Degat = 1;
    this->vitesse = 5;
    this->pieces = 15;
    this->position.x = x;
    this->position.y = y;
}

void Runner::prendre_degats(int nb_degats) {
    this->HP -= nb_degats;
}

void Runner::emplacement(int x, int y) {

    this->position.x = x;
    this->position.y = y;
}


class Mage {
private:
    int HP;
    int Degat;
    int vitesse;
    int pieces;
    sf::Vector2i position;
public:
    Mage(int x, int y);
    void regen();

    void prendre_degats(int nb_degats);
    sf::Vector2i get_position() {
        return this->position;
    }
    void emplacement(int x, int y);
    int get_HP() {
        return this->HP;
    }
    int get_pieces() {
        return this->pieces;
    }
    int get_vitesse() {
        return this->vitesse;
    }
};

Mage::Mage(int x, int y) {
    this->HP = 60;
    this->Degat = 5;
    this->vitesse = 3;
    this->pieces = 60;
    this->position.x = x;
    this->position.y = y;
}

void Mage::prendre_degats(int nb_degats) {
    this->HP -= nb_degats;
}

void Mage::emplacement(int x, int y) {

    this->position.x = x;
    this->position.y = y;
}


void Mage::regen() {

    // Toutes les 2 secondes le mage r�cup�re 25 points de vie
    if ((double)clock() / CLOCKS_PER_SEC >= 2)
    {
        this->HP += 25;
    }


}