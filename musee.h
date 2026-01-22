#ifndef MUSEE_H
#define MUSEE_H

#include <string>
#include <vector>
#include <iostream>
#include "oeuvre.h"
#include "exposition.h"

using namespace std;

class Musee {
private:
    string nom;
    vector<Oeuvre> stock_oeuvre;
    vector<Exposition> liste_exposition;

public:
    Musee(string n);

    string get_Nom();
    vector<Oeuvre> get_Liste_Oeuvre();
    vector<Exposition> get_Liste_Exposition();

    void ajouterOeuvreStock(Oeuvre o);
    void retirerOeuvreStock(string nom_oeuvre);

    void ajouterExposition(Exposition e);

    friend ostream& operator<<(ostream& os, const Musee& m);
};

#endif