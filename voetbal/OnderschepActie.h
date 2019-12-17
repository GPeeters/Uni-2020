//
// Created by Gilles on 22/11/2019.
//

#ifndef VOETBAL_ONDERSCHEPACTIE_H
#define VOETBAL_ONDERSCHEPACTIE_H


#include "Actie.h"

class OnderschepActie: public Actie {
private:
    bool succes;
public:
    OnderschepActie();
    bool getSucces();
};


#endif //VOETBAL_ONDERSCHEPACTIE_H
