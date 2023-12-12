#include "personnage.hpp"

villain::villain(float vie, float energie, std::string attaque, std::string defense) {
	pt_de_vie = vie;
	pt_energie = energie;
	m_attaque = attaque;
	m_defense = defense;
}

std::string villain::attaque() {
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
	return "Attaque reussie";
}
std::string villain::defense() {
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