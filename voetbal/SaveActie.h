//
// Created by Gilles on 22/11/2019.
//

#ifndef VOETBAL_SAVEACTIE_H
#define VOETBAL_SAVEACTIE_H


#include "Actie.h"

class SaveActie: public Actie {
private:
    bool succes;
public:
    SaveActie(bool suc);
    virtual ~SaveActie();
    bool getSucces();
};


#endif //VOETBAL_SAVEACTIE_H
