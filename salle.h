#ifndef SALLE_H
#define SALLE_H

#include <string>
#include <vector>
#include <iostream>
#include "oeuvre.h"

class Salle {
private:
    std::string nom;
    std::vector<Oeuvre> liste_oeuvre;

public:
    Salle(std::string n, std::vector<Oeuvre> l_o);

    std::string get_Nom() const;
    std::vector<Oeuvre> get_Liste_Oeuvre() const;
};

#endif