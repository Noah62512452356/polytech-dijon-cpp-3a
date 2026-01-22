#include "musee.h"

Musee::Musee(string n) : nom(n) {}

string Musee::get_Nom() {return nom;}
vector<Oeuvre> Musee::get_Liste_Oeuvre() {return stock_oeuvre;}
vector<Exposition> Musee::get_Liste_Exposition() {return liste_exposition;}

void Musee::ajouterOeuvreStock(Oeuvre o) {
    stock_oeuvre.push_back(o);
}

void Musee::retirerOeuvreStock(string oeuvre) {
    for (int i = 0; i < stock_oeuvre.size(); i++) {
        if (stock_oeuvre[i].get_Nom() == oeuvre) {
            stock_oeuvre.erase(stock_oeuvre.begin() + i);
            cout << "Oeuvre : " << "'" << oeuvre << "'" << " retiree du stock." << endl;
            return;
        }
    }
    cout << "Oeuvre : " << "'" << oeuvre << "'" << " pas trouvable." << endl;
}

void Musee::ajouterExposition(Exposition e) {
    liste_exposition.push_back(e);
}

ostream& operator<<(ostream& os, const Musee& m) {
    os << "Bienvenu mon seigneur au musee : " << m.nom << endl << endl;
    
    os << "Stock dans le musee :" << endl;
    if (m.stock_oeuvre.size() == 0) {
        os << "OH NON, le stock est vide." << endl;
    } else {
        for (int i = 0; i < m.stock_oeuvre.size(); i++) {
            os << m.stock_oeuvre[i] << endl;
        }
    }
    
    os << endl << "Exposition qui se deroule actuellement :" << endl;
    if (m.liste_exposition.size() == 0) {
        os << "OH NON, pas d'exposition." << endl;
    } else {
        for (int i = 0; i < m.liste_exposition.size(); i++) {
            os << m.liste_exposition[i] << endl;
        }
    }
    return os;
}