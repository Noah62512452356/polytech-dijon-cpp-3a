#include "exposition.h"

Exposition::Exposition(std::string n, std::vector<Salle> l_s, Date d, Date f) : nom(n), liste_salle(l_s), debut(d), fin(f) {}

std::string Exposition::get_Nom() const {return nom;}
std::vector<Salle> Exposition::get_Liste_Salle() const {return liste_salle;}
Date Exposition::get_Debut() const {return debut;}
Date Exposition::get_Fin() const {return fin;}