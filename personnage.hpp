#ifndef PERSONNAGE
#define PERSONNAGE
#include <iostream>

using namespace std;

class perso {
private :
    float pt_de_vie;
    std::string m_attaque;
    std::string m_defense;

public:
    perso(float vie, std::string attaque, std::string defense);
    ~perso();
    std::string attaque();
    std::string defense();
};

class hero : public perso {

};

class villain : public perso {

};
#endif