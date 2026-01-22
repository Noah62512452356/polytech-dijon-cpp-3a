#ifndef EXPOSITION_H
#define EXPOSITION_H

#include <string>
#include <vector>
#include <iostream>
#include "salle.h"
#include "date.h"

using namespace std;

class Exposition {
private:
    string nom;
    vector<Salle> liste_salle;
    Date debut;
    Date fin;

public:
    Exposition(string n, Date d, Date f);

    string get_Nom();
    vector<Salle> get_Liste_Salle();
    Date get_Debut();
    Date get_Fin();

    void ajouterSalle(Salle s);

    friend ostream& operator<<(ostream& os, const Exposition& e);
};

#endif