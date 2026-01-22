#include "artiste.h"

Artiste::Artiste(string n, string p) : nom(n), prenom(p) {}

string Artiste::get_Nom() {return nom;}
string Artiste::get_Prenom() {return prenom;}
vector<string> Artiste::get_Specialites() {return specialites;}

void Artiste::ajouterSpecialite(string spe) {
    specialites.push_back(spe);
}

ostream& operator<<(ostream& os, const Artiste& a) {
    os << a.nom << " " << a.prenom << " (Specialites : ";
    if (a.specialites.size() == 0) {
        os << "Aucune";
    } else {
        for (int i = 0; i < a.specialites.size(); i++) {
            os << a.specialites[i] << " ";
        }
    }
    os << ")";
    return os;
}