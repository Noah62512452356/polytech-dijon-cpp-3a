#include "artiste.h"

Artiste::Artiste(std::string n, std::string p, std::vector<std::string> s) : nom(n), prenom(p), specialites(s) {}

std::string Artiste::get_Nom() const {return nom;}
std::string Artiste::get_Prenom() const {return prenom;}
std::vector<std::string> Artiste::get_Specialites() const {return specialites;}