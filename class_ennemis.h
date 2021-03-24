class Zombie {
  private:
    int HP;
    int Degat;
    int vitesse;
    int pieces;
  public:
    Zombie();
    void prendre_degats(int nb_degats);
};

Zombie::Zombie() {
    this->HP=50;
    this->Degat=2;
    this->vitesse=5;    //a redefinir
    this->pieces=10;
}

void Zombie::prendre_degats(int nb_degats) {
    this->HP-=nb_degats;
}


class Tank {
private:
    int HP;
    int Degat;
    int vitesse;
    int pieces;
public:
    Tank();
    void prendre_degats(int nb_degats);
};

Tank::Tank() {
    this->HP=100;
    this->Degat=4;
    this->vitesse=2;    //a redefinir
    this->pieces=40;
}

void Tank::prendre_degats(int nb_degats) {
    this->HP-=nb_degats;
}


class Runner {
private:
    int HP;
    int Degat;
    int vitesse;
    int pieces;
public:
    Runner();
    void prendre_degats(int nb_degats);
};

Runner::Runner() {
    this->HP=30;
    this->Degat=1;
    this->vitesse=10;    //a redefinir
    this->pieces=15;
}

void Runner::prendre_degats(int nb_degats) {
    this->HP-=nb_degats;
}


class Mage {
private:
    int HP;
    int Degat;
    int vitesse;
    int pieces;
public:
    Mage();
    void prendre_degats(int nb_degats);
    void regen();
};

Mage::Mage() {
    this->HP=60;
    this->Degat=5;
    this->vitesse=5;    //a redefinir
    this->pieces=60;
}

void Mage::prendre_degats(int nb_degats) {
    this->HP-=nb_degats;
}