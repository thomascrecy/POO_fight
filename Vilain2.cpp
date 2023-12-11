#include "personnage.hpp"

perso::perso(float vie, std::string attaque, std::string defense) {
	pt_de_vie = vie;
	m_attaque = attaque;
	m_defense = defense;
}

std::string perso::attaque() {
	pt_de_vie = 100;
	float degats = 0.0;
	if (m_attaque == "Nova Strike") {
		degats = 35.0;
	}
	else if (m_attaque == "Death Beam") {
		degats = 12.0;
	}
}
std::string perso::defense() {

	int esquive = rand() % 2;

	if (esquive == 1) {
		std::cout << "Le personnage esquive l'attaque !" << std::endl;
	}
	else {
		std::cout << "Le personnage ne parvient pas à esquiver l'attaque." << std::endl;
	}
}


