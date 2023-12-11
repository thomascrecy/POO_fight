#include "personnage.hpp"

perso::perso(float vie, float energie, std::string attaque, std::string defense) {
	pt_de_vie = vie;
	pt_energie = energie;
	m_attaque = attaque;
	m_defense = defense;
}

std::string perso::attaque() {
	float degats = 0.0;
	if (m_attaque == "Dissection") {
		degats = 10.0;
	}
	else if (m_attaque == "Laceration") {
		degats = 20.0;
	}
	else if (m_attaque == "Extension du territoire") {
		degats = 30.0;
	}
}
std::string perso::defense() {
	pt_energie = 100;
	int esquive = rand() % 2;

	if (esquive == 1) {
		std::cout << "Le personnage esquive l'attaque !" << std::endl;
	}
	else {
		std::cout << "Le personnage ne parvient pas à esquiver l'attaque." << std::endl;
	}

	if (m_defense == "Bloque" && pt_energie >= 5) {
		degats -= 5;
		pt_energie -= 5;
	}
	else if (m_defense == "Armure" && pt_energie >= 10) {
		pt_de_vie -= 10;
		pt_energie -= 10;
	}
	else if (m_defense == "Contre" && pt_energie >= 15) {
		pt_de_vie -= 15;
		pt_energie -= 15;
	}
}