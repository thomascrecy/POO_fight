#include "personnage.hpp"

hero::hero(float vie, float energie) {
    pt_de_vie = vie;
    pt_energie = energie;
}

hero::~hero() {

}

std::string hero::attaque() {
    float degats = 0.0;
    if (m_attaque == "Genki Dama") {
        degats = 35.0;
    }
    else if (m_attaque == "Kamehameha") {
        degats = 12.0;
    }
    else if (m_attaque == "Regenerate") {
        pt_de_vie += 10;
        return "Attaque réussie";
    }
    return "Attaque réussie";
}

std::string hero::defense() {
    if (m_defense == "Bloque" && pt_energie >= 5) {
        degats -= 5;
        pt_energie -= 5;
        return "Défense réussie";
    }
    else if (m_defense == "Armure" && pt_energie >= 10) {
        degats -= 10;
        pt_energie -= 10;
        return "Défense réussie";
    }
    else if (m_defense == "Contre" && pt_energie >= 15) {
        degats -= 15;
        pt_energie -= 15;
        return "Défense réussie";
    }
}

float hero::getPtVie() {
    return pt_de_vie;
}