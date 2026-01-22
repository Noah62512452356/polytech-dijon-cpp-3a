#ifndef ARTISTE_H
#define ARTISTE_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Artiste {
private:
    string nom;
    string prenom;
    vector<string> specialites;

public:
    Artiste(string n, string p);

    string get_Nom();
    string get_Prenom();
    vector<string> get_Specialites();

    void ajouterSpecialite(string spe);

    friend ostream& operator<<(ostream& os, const Artiste& a);
};

#endif