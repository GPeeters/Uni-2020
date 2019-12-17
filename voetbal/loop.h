//
// Created by Gilles on 22/11/2019.
//

#ifndef VOETBAL_LOOP_H
#define VOETBAL_LOOP_H


#include "Actie.h"

class loop: public Actie{
private:
    int runDist;

public:
    loop(int afstand);

    virtual ~loop();

    int getDist();
};


#endif //VOETBAL_LOOP_H
