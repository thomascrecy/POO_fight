#include "personnage.hpp"

villain::villain(float vie, float energie) :valeur_degats(0.0f), valeur_defense(0.0f) {
	pt_de_vie = vie;
	pt_energie = energie;
}

villain::~villain() {

}

std::string villain::attaque(std::string chosenAttack) {
	if (chosenAttack == "Dissection") {
        valeur_degats = 10.0;
        return "Attaque reussie";
	}
	else if (chosenAttack == "Laceration") {
        valeur_degats = 20.0;
        return "Attaque reussie";
	}
	else if (chosenAttack == "Extension du territoire") {
        valeur_degats = 30.0;
        return "Attaque reussie";
	}
	return "Attaque ratee";
}
std::string villain::defense(std::string chosenDefense) {
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

float villain::getPtVie() {
	return pt_de_vie;
}

void villain::setPtVie(float pv_moins) {
    pt_de_vie -= pv_moins;
}

float villain::getAtt() {
    return valeur_degats;
}
float villain::getDef() {
    return valeur_defense;
}