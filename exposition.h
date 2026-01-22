#ifndef EXPOSITION_H
#define EXPOSITION_H

#include <string>
#include <vector>
#include <iostream>
#include "salle.h"
#include "date.h"

class Exposition {
private:
    std::string nom;
    std::vector<Salle> liste_salle;
    Date debut;
    Date fin;

public:
    Exposition(std::string n, std::vector<Salle> l_s, Date debut, Date fin);

    std::string get_Nom() const;
    std::vector<Salle> get_Liste_Salle() const;
    Date get_Debut() const;
    Date get_Fin() const;
};

#endif