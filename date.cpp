#include "date.h"

Date::Date() {jour = 1; mois = 1; annee = 2000;} // Si pas de parametres
Date::Date(int j, int m, int a) : jour(j), mois(m), annee(a) {}

int Date::get_Jour() {return jour;}
int Date::get_Mois() {return mois;}
int Date::get_Annee() {return annee;}

ostream& operator<<(ostream& os, const Date& d) {
    os << d.jour << "/" << d.mois << "/" << d.annee;
    return os;
}