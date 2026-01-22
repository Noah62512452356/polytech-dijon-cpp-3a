#ifndef ARTISTE_H
#define ARTISTE_H

#include <string>
#include <vector>
#include <iostream>
#include "oeuvre.h"

class Artiste {
private:
    std::string nom;
    std::string prenom;
    std::vector<std::string> specialites;

public:
    Artiste(std::string n, std::string p, std::vector<std::string> s);

    std::string get_Nom() const;
    std::string get_Prenom() const;
    std::vector<std::string> get_Specialites() const;
};

#endif