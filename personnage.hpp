#ifndef PERSONNAGE
#define PERSONNAGE
#include <iostream>

class perso {
    float pt_de_vie;
    std::string m_attaque;
    std::string m_defense;

public:
    perso(float vie, std::string attaque, std::string defense);
    ~perso();
    std::string attaque();
    std::string defense();
};
#endif