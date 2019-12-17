//
// Created by Gilles on 22/11/2019.
//

#ifndef VOETBAL_MIDDENVELDER_H
#define VOETBAL_MIDDENVELDER_H


#include "Speler.h"
#include "PasActie.h"
#include "loop.h"

class middenvelder: public Speler {
private:
    int aantalGoedePasses;
    int aantalSlechtePasses;
public:
    middenvelder();
    middenvelder(string naam);

    void addActie(Actie *act);
};


#endif //VOETBAL_MIDDENVELDER_H
