//
// Created by Gilles on 22/11/2019.
//

#include "Actie.h"

Actie::Actie(string naam){
    Actie::naam=naam;
}


Actie::Actie() {}


string Actie::getNaam(){
    return naam;
}

void Actie::setNaam(string naam) {
    Actie::naam = naam;
}


