//
// Created by Gilles on 22/11/2019.
//

#ifndef VOETBAL_VERDEDIGER_H
#define VOETBAL_VERDEDIGER_H


#include "Speler.h"

class verdediger: public Speler {
private:
    int aantalBallenOnderschept;

public:
    verdediger();
    verdediger(string naam);
    void addActie(Actie *act);
};


#endif //VOETBAL_VERDEDIGER_H
