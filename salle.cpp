#include "salle.h"

Salle::Salle(std::string n, std::vector<Oeuvre> l_o) : nom(n), liste_oeuvre(l_o) {}

std::string Salle::get_Nom() const {return nom;}
std::vector<Oeuvre> Salle::get_Liste_Oeuvre() const {return liste_oeuvre;}