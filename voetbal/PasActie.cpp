//
// Created by Gilles on 22/11/2019.
//

#include "PasActie.h"

PasActie::PasActie(bool suc): Actie("Pas"){
    this->succes=suc;
}

bool PasActie::getSucces() {
    return this->succes;
}
