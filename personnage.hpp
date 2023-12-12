#ifndef PERSONNAGE
#define PERSONNAGE
#include <iostream>

using namespace std;

class hero {
private : 
    float pt_de_vie;
    float pt_energie;
    float valeur_degats;
    float valeur_defense;
public :
    hero(float vie, float energie);
    ~hero();
    float getPtVie();
    std::string attaque(std::string chosenAttack);
    std::string defense(std::string chosenDefense);
};

class villain {
private :
    float pt_de_vie;
    float pt_energie;
    float valeur_degats;
    float valeur_defense;
public :
    villain(float vie, float energie);
    ~villain();
    float getPtVie();
    std::string attaque(std::string chosenAttack);
    std::string defense(std::string chosenDefense);
};

#endif