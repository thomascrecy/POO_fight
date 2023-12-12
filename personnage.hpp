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
    void attaque();
    void defense();
};

class hero : public perso {
private : 
    float pt_de_vie;
    float pt_energie;
    std::string m_attaque;
    std::string m_defense;
public :
    hero(float vie, float energie);
    ~hero();
    float getPtVie();
};

class villain : public perso {
private :
    float pt_de_vie;
    float pt_energie;
    std::string m_attaque;
    std::string m_defense;
public :
    villain(float vie, float energie);
    ~villain();
    float getPtVie();
};

#endif