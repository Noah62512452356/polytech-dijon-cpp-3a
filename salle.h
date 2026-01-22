#ifndef SALLE_H
#define SALLE_H

#include <string>
#include <vector>
#include <iostream>
#include "oeuvre.h"

using namespace std;

class Salle {
private:
    string nom;
    vector<Oeuvre> liste_oeuvre;

public:
    Salle(string n);

    string get_Nom();
    vector<Oeuvre> get_Liste_Oeuvre();

    void ajouterOeuvre(Oeuvre o);

    friend ostream& operator<<(ostream& os, const Salle& s);
};

#endif