#ifndef MUSEE_H
#define MUSEE_H

#include <string>
#include <vector>
#include <iostream>
#include "exposition.h"
#include "oeuvre.h"

class Musee {
private:
    std::string nom;
    std::vector<Oeuvre> liste_oeuvre;
    std::vector<Exposition> liste_exposition;

public:
    Musee(std::string n, std::vector<Oeuvre> l_o, std::vector<Exposition> l_e);

    std::string get_Nom() const;
    std::vector<Oeuvre> get_Liste_Oeuvre() const;
    std::vector<Exposition> get_Liste_Exposition() const;
};

#endif