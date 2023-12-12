#include "personnage.hpp"

villain::villain(float vie, float energie) :valeur_degats(0.0f), valeur_defense(0.0f) {
	pt_de_vie = vie;
	pt_energie = energie;
}

villain::~villain() {

}

std::string villain::attaque(std::string chosenAttack) {
	float degats = 0.0;
	if (chosenAttack == "Dissection") {
		degats = 10.0;
	}
	else if (chosenAttack == "Laceration") {
		degats = 20.0;
	}
	else if (chosenAttack == "Extension du territoire") {
		degats = 30.0;
	}
	return "Attaque reussie";
}
std::string villain::defense(std::string chosenDefense) {
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

float villain::getPtVie() {
	return pt_de_vie;
}