//
// Created by Gilles on 11/11/2019.
//

#include "Directeur.h"
#include <iostream>
#include "Manager.h"

using namespace std;

Directeur::Directeur(string naam, string groep, string functie): Manager(naam, groep), functie(functie){};

Directeur::~Directeur(){

};

ostream &operator<<(ostream &os, const Directeur &directeur) {
    os << static_cast<const Manager &>(directeur) << " functie: " << directeur.functie;
    return os;
}