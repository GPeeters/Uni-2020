//
// Created by Gilles on 22/11/2019.
//

#ifndef VOETBAL_KEEPER_H
#define VOETBAL_KEEPER_H

#include "SaveActie.h"
#include "Speler.h"

using namespace std;

class Keeper: public Speler {
private:

    int aantalSaves;
    int aantalTegengoals;

public:
    Keeper(string naam);

    virtual ~Keeper();

    void addActie(Actie *act);

    int getAantalSaves();

    int getAantalTegengoals();
};


#endif //VOETBAL_KEEPER_H
