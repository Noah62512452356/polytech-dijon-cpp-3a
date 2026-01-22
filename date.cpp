#include "date.h"

Date::Date(int j, int m, int a) : jour(j), mois(m), annee(a) {}

int Date::get_Jour() const { return jour; }
int Date::get_Mois() const { return mois; }
int Date::get_Annee() const { return annee; }