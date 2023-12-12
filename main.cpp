#include "personnage.hpp"
#include <iostream>

using namespace std;

int main() {
    string joueur1 = "";
    string joueur2 = "";
    string rolej1 = "";
    string rolej2 = "";

    cout << "Saisissez le nom du Joueur 1" << endl;
    cin >> joueur1;
    cout << "Choisissez votre role : Hero ou Villain" << endl;
    cin >> rolej1;

    cout << "Saisissez le nom du Joueur 2" << endl;
    cin >> joueur2;
    if (rolej1 == "Hero") {
        rolej2 = "Villain";
    }
    else {
        rolej2 = "Hero";
    }

    hero Goku(100.0f, 100.0f);
    villain Sukuna(100.0f, 100.0f);

    while (Goku.getPtVie() > 0 && Sukuna.getPtVie() > 0) {
        std::string chosenAttackj1 = "";
        std::string chosenDefensej1 = "";
        std::string chosenAttackj2 = "";
        std::string chosenDefensej2 = "";

        float valeur_att1 = 0.0f;
        float valeur_def1 = 0.0f;
        float valeur_att2 = 0.0f;
        float valeur_def2 = 0.0f;

        cout << joueur1 << " choisi son attaque" << endl;
        cin >> chosenAttackj1;
        cout << joueur2 << " choisi sa defense" << endl;
        cin >> chosenDefensej2;

        Goku.attaque(chosenAttackj1);
        Sukuna.defense(chosenDefensej2);

        float degats_prisj2 = Goku.getAtt() - Sukuna.getDef();

        Sukuna.setPtVie(degats_prisj2);
        float pviev = Sukuna.getPtVie();
        cout << pviev << endl;

        if (Sukuna.getPtVie() <= 0) {
            cout << joueur1 << " a gagné !" << endl;
        }

        cout << joueur2 << " choisi son attaque" << endl;
        cin >> chosenAttackj2;
        cout << joueur1 << " choisi sa defense" << endl;
        cin >> chosenDefensej1;

        Sukuna.attaque(chosenAttackj2);
        Goku.defense(chosenDefensej1);

        float degats_prisj1 = Sukuna.getAtt() - Goku.getDef();

        Goku.setPtVie(degats_prisj1);
        float pvieh = Goku.getPtVie();
        cout << pvieh << endl;

        if (Goku.getPtVie() <= 0) {
            cout << joueur2 << " a gagne" << endl;
        }
    }

    /*delete Goku;
    delete Sukuna;*/
    return 0;
}
