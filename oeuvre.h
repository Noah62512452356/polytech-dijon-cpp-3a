#ifndef OEUVRE_H
#define OEUVRE_H

#include <string>
#include <iostream>
#include "artiste.h"

class Oeuvre {
private:
    std::string nom;
    std::string type;

public:
    Oeuvre(std::string n, std::string t);

    std::string get_Nom() const;
    std::string get_Type() const;
};

#endif