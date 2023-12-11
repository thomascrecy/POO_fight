#include "personnage.hpp"

perso::perso(float vie, float energie, std::string attaque, std::string defense) {
	pt_de_vie = vie;
	pt_energie = energie;
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
	else (m_attaque == "Regenerate") {
		pt_de_vie += 10;
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
	if (m_defense == "Blocage" && pt_energie >= 10 ) {
		pt_de_vie += 6;
		pt_energie -= 10;
	}
	else (m_defense == "stop" && pt_energie >= 10) {
		pt_de_vie += 9;
		pt_energie -= 10;
	}
}


