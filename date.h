#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

class Date {
private:
    int jour;
    int mois;
    int annee;

public:
    Date(); // Si pas de parametres
    Date(int j, int m, int a);

    int get_Jour();
    int get_Mois();
    int get_Annee();

    friend ostream& operator<<(ostream& os, const Date& d);
};

#endif