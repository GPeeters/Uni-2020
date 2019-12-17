//
// Created by Gilles on 11/11/2019.
//

#include "Werknemer.h"

Werknemer::Werknemer(){
    naam = "niet gekend";
};

Werknemer::Werknemer(string name){
    naam = name;
};

Werknemer::Werknemer(Werknemer &wn){
    Werknemer::
    naam = wn.naam;
};

Werknemer::~Werknemer() {
};

string Werknemer::getNaam(){
    return naam;
};

void Werknemer::setNaam(string naam) {
    Werknemer::naam = naam;
};

ostream &operator<<(ostream &os, const Werknemer &werknemer) {
    os << "naam: " << werknemer.naam ;
    return os;
};
