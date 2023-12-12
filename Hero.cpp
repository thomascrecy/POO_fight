#include "personnage.hpp"

hero::hero(float vie, float energie) :valeur_degats(0.0f), valeur_defense(0.0f) {
    pt_de_vie = vie;
    pt_energie = energie;
}

hero::~hero() {

}

std::string hero::attaque(std::string chosenAttack) {
    float degats = 0.0;
    if (chosenAttack == "Boule de ki") {
        valeur_degats = 10.0f;
    }
    else if (chosenAttack == "Kamehameha") {
        valeur_degats = 20.0f;
    }
    else if (chosenAttack == "Genki Dama") {
        valeur_degats = 30.0f;
    }

    return "Attaque réussie";
}

std::string hero::defense(std::string chosenDefense) {
    if (chosenDefense == "Bloque" && pt_energie >= 5) {
        valeur_defense = 5;
        pt_energie -= 5;
        return "Défense réussie";
    }
    else if (chosenDefense == "Armure" && pt_energie >= 10) {
        valeur_defense = 10;
        pt_energie -= 10;
        return "Défense réussie";
    }
    else if (chosenDefense == "Contre" && pt_energie >= 15) {
        valeur_defense = 15;
        pt_energie -= 15;
        return "Défense réussie";
    }
}

float hero::getPtVie() {
    return pt_de_vie;
}