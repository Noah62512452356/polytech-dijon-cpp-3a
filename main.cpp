#include "artiste.h"
#include "musee.h"
#include "oeuvre.h"
#include "salle.h"
#include "date.h"
#include "exposition.h"

#include <iostream>

using namespace std;

int main() {

    cout << endl;

    Musee musee("Bonjour Museum");

    Artiste artiste1("Jean", "Respectable");
    artiste1.ajouterSpecialite("Peinture");

    Artiste artiste2("Homme", "Poli");
    artiste2.ajouterSpecialite("Sculpture");

    Oeuvre oeuvre1("Bien le bonsoir mon seigneur", "Peinture", &artiste1);
    Oeuvre oeuvre2("Rendez les bijoux de la couronne", "Sculpture", &artiste2);
    Oeuvre oeuvre3("Mets plus sincere salutations", "Poeme", nullptr);

    musee.ajouterOeuvreStock(oeuvre1);
    musee.ajouterOeuvreStock(oeuvre2);
    musee.ajouterOeuvreStock(oeuvre3);

    Date debut(1, 5, 2023);
    Date fin(30, 8, 2024);

    Exposition exposition("Revolution du BONJOUR", debut, fin);

    Salle salle1("Salle A");
    Salle salle2("Salle B");

    salle1.ajouterOeuvre(oeuvre1);
    salle2.ajouterOeuvre(oeuvre2);
    salle2.ajouterOeuvre(oeuvre3);

    exposition.ajouterSalle(salle1);
    exposition.ajouterSalle(salle2);

    musee.ajouterExposition(exposition);

    cout << musee;
    cout << "Test de retirer" << endl;
    musee.retirerOeuvreStock("Mets plus sincere salutations");
    cout << endl << "Check si retrait" << endl;
    vector<Oeuvre> stock = musee.get_Liste_Oeuvre();
    for(int i=0; i<stock.size(); i++) {
        cout << stock[i] << endl;
    }

    cout << endl;

    return 0;
}