//
// Created by Gilles on 22/11/2019.
//

#ifndef VOETBAL_PASACTIE_H
#define VOETBAL_PASACTIE_H


#include "Actie.h"

class PasActie: public Actie {
private:
    bool succes;
public:
    PasActie(bool suc);

    bool getSucces();

};


#endif //VOETBAL_PASACTIE_H
