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
        cout << joueur1 << " attaque" << endl;
        cout << joueur2 << " se defend" << endl;

        Goku.attaque();
        Sukuna.defense();

        if (Sukuna.getPtVie() <= 0) {
            cout << joueur1 << " a gagné !" << endl;
        }

        cout << joueur2 << " attaque" << endl;
        cout << joueur1 << " se defend" << endl;

        Sukuna.attaque();
        Goku.defense();

        if (Goku.getPtVie() <= 0) {
            cout << joueur2 << " a gagne" << endl;
        }
    }

    /*delete Goku;
    delete Sukuna;*/
    return 0;
}
