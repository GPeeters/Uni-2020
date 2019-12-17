//
// Created by Gilles on 11/11/2019.
//

#include "Manager.h"
#include"Werknemer.h"

Manager::~Manager() {
};

Manager::Manager() : Werknemer(){
    groep="niet gekend";
};

Manager::Manager(string naam, string groep) : Werknemer(naam), groep(groep) {
};

string Manager::getGroep() {
    return groep;
};

void Manager::setGroep(string groep) {
    Manager::groep = groep;
};

ostream &operator<<(ostream &os, const Manager &manager) {
    os << static_cast<const Werknemer &>(manager) << " groep: " << manager.groep;
    return os;
};


