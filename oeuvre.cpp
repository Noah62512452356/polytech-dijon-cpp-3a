#include "oeuvre.h"

Oeuvre::Oeuvre(string n, string t, Artiste* art) : nom(n), type(t), artiste(art) {}

string Oeuvre::get_Nom() {return nom;}
string Oeuvre::get_Type() {return type;}
Artiste* Oeuvre::get_Artiste() {return artiste;}

ostream& operator<<(ostream& os, const Oeuvre& o) {
    os << "Oeuvre : " << o.nom << " (Type : " << o.type << ")";
    if (o.artiste != nullptr) {
        os << " fait par " << o.artiste->get_Nom();
    } else {
        os << " Anonymous";
    }
    return os;
}