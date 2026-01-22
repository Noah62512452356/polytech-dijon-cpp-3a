#include "oeuvre.h"

Oeuvre::Oeuvre(std::string n, std::string t) : nom(n), type(t) {}

std::string Oeuvre::get_Nom() const {return nom;}
std::string Oeuvre::get_Type() const {return type;}