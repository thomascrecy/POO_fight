#include "personnage.hpp"

hero::hero(float vie, float energie) :valeur_degats(0.0f), valeur_defense(0.0f) {
    pt_de_vie = vie;
    pt_energie = energie;
}

hero::~hero() {

}

std::string hero::attaque(std::string chosenAttack) {
    
    if (chosenAttack == "Boule de ki") {
        valeur_degats = 10.0f;
        return "Attaque reussie";
    }
    else if (chosenAttack == "Kamehameha") {
        valeur_degats = 20.0f;
        return "Attaque reussie";
    }
    else if (chosenAttack == "Genki Dama") {
        valeur_degats = 30.0f;
        return "Attaque reussie";
    }
    return "Attaque ratee";
}

std::string hero::defense(std::string chosenDefense) {
    if (chosenDefense == "Bloque" && pt_energie >= 5) {
        valeur_defense = 5;
        pt_energie -= 5;
        return "Defense reussie";
    }
    else if (chosenDefense == "Armure" && pt_energie >= 10) {
        valeur_defense = 10;
        pt_energie -= 10;
        return "Defense reussie";
    }
    else if (chosenDefense == "Contre" && pt_energie >= 15) {
        valeur_defense = 15;
        pt_energie -= 15;
        return "Defense reussie";
    }
    return "Defense ratee";
}

float hero::getPtVie() {
    return pt_de_vie;
}

void hero::setPtVie(float pv_moins) {
    pt_de_vie -= pv_moins;
}

float hero::getAtt() {
    return valeur_degats;
}
float hero::getDef() {
    return valeur_defense;
}