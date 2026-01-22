#ifndef OEUVRE_H
#define OEUVRE_H

#include <string>
#include <iostream>
#include "artiste.h"

using namespace std;

class Oeuvre {
private:
    string nom;
    string type;
    Artiste* artiste;

public:
    Oeuvre(string n, string t, Artiste* art);

    string get_Nom();
    string get_Type();
    Artiste* get_Artiste();

    friend ostream& operator<<(ostream& os, const Oeuvre& o);
};

#endif