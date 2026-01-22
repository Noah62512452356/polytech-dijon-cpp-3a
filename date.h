#ifndef DATE_H
#define DATE_H

class Date {
private:
    int jour;
    int mois;
    int annee;

public:
    Date(int j, int m, int a);

    int get_Jour() const;
    int get_Mois() const;
    int get_Annee() const;
};

#endif