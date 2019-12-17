//
// Created by gille on 6/12/2019.
//

#ifndef VOETBAL_DOELPOGING_H
#define VOETBAL_DOELPOGING_H

#include "Actie.h"

class doelpoging: public Actie {
private:
    bool succes;
public:
    doelpoging(bool succes);

    virtual ~doelpoging();

    bool getSucces();
};


#endif //VOETBAL_DOELPOGING_H
