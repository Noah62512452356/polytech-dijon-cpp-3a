#include "exposition.h"

Exposition::Exposition(string n, Date d, Date f) : nom(n), debut(d), fin(f) {}

string Exposition::get_Nom() {return nom;}
vector<Salle> Exposition::get_Liste_Salle() {return liste_salle;}
Date Exposition::get_Debut() {return debut;}
Date Exposition::get_Fin() {return fin;}

void Exposition::ajouterSalle(Salle s) {
    liste_salle.push_back(s);
}

ostream& operator<<(ostream& os, const Exposition& e) {
    os << "Exposition : " << "'" << e.nom << "'" << ", commence le " << e.debut << " et finit le " << e.fin << endl;
    for (int i = 0; i < e.liste_salle.size(); i++) {
        os << e.liste_salle[i];
    }
    return os;
}