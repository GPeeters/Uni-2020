//
// Created by Gilles on 22/11/2019.
//

#ifndef VOETBAL_AANVALLER_H
#define VOETBAL_AANVALLER_H

#include "Speler.h"
#include "doelpoging.h"

class aanvaller : public Speler {
private:
    int aantalDoelpunten;
    int aantalSchotenOpDoel;
public:
    aanvaller();
    aanvaller(string naam);

    virtual ~aanvaller();

    void addActie(Actie *act);

    int getAantalDoelpunten();

    int getAantalSchotenOpDoel();
};



#endif //VOETBAL_AANVALLER_H
