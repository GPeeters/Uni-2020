//
// Created by Gilles on 11/11/2019.
//

#ifndef UNTITLED1_DIRECTEUR_H
#define UNTITLED1_DIRECTEUR_H

#include <iostream>
#include "Manager.h"

using namespace std;

class Directeur: public Manager{
private:
    string functie;
public:
    Directeur(string naam, string groep, string functie);

    virtual ~Directeur();

    friend ostream &operator<<(ostream &os, const Directeur &directeur);
};


#endif //UNTITLED1_DIRECTEUR_H
