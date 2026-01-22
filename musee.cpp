#include "musee.h"

Musee::Musee(std::string n, std::vector<Exposition> l_o, std::vector<Exposition> l_e) : nom(n), liste_oeuvre(l_o), liste_exposition(l_e) {}

std::string Musee::get_Nom() const {return nom;}
std::vector<Oeuvre> Musee::get_Liste_Oeuvre() const {return liste_oeuvre;}
std::vector<Exposition> Musee::get_Liste_Exposition() const {return liste_exposition;}