#include "salle.h"

Salle::Salle(string n) : nom(n) {}

string Salle::get_Nom() {return nom;}
vector<Oeuvre> Salle::get_Liste_Oeuvre() {return liste_oeuvre;}

void Salle::ajouterOeuvre(Oeuvre o) {
    liste_oeuvre.push_back(o);
}

ostream& operator<<(ostream& os, const Salle& s) {
    os << "   => Salle : " << s.nom << endl;
    for (int i = 0; i < s.liste_oeuvre.size(); i++) {
        os << "      - " << s.liste_oeuvre[i] << endl;
    }
    return os;
}