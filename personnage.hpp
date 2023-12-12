#ifndef PERSONNAGE
#define PERSONNAGE
#include <iostream>

using namespace std;

class hero {
private : 
    float pt_de_vie;
    float pt_energie;
    std::string m_attaque;
    std::string m_defense;
public :
    hero(float vie, float energie);
    ~hero();
    float getPtVie();
    void attaque();
    void defense();
};

class villain {
private :
    float pt_de_vie;
    float pt_energie;
    std::string m_attaque;
    std::string m_defense;
public :
    villain(float vie, float energie);
    ~villain();
    float getPtVie();
    void attaque();
    void defense();
};

#endif