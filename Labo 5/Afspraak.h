//
// Created by Gilles on 14/10/2019.
//

#ifndef TIJDEN_AFSPRAAK_H
#define TIJDEN_AFSPRAAK_H
#include<iostream>
using namespace std;

#include "Datum.h"

class Afspraak {
private:
    Datum datum;
    string plaats;


public:
    Afspraak();
    Afspraak(int dag, int maand, int jaar, string place);
    Afspraak(Datum date, string place);
    Afspraak(Afspraak  &af);
    ~Afspraak();
    friend ostream& operator << (ostream& os, Afspraak& af);
    Datum getDat();
    string getPlaats();
    void setDat(Datum d);
    void setPlaats(string pl);
    void schrijfNL();
    void schrijfE();

    bool isGelijk(Afspraak af);
};


#endif //TIJDEN_AFSPRAAK_H
