//
// Created by Gilles on 22/11/2019.
//

#ifndef VOETBAL_TEAM_H
#define VOETBAL_TEAM_H

#include <iostream>
#include "Speler.h"
#include "aanvaller.h"
#include "Keeper.h"
#include "verdediger.h"
#include "middenvelder.h"

class team: public Speler {
private:
    vector<Speler *> spelers;

public:
    team(vector<Speler *> spelers);

    virtual ~team();
    void addPlayer(Speler * player);
    void gameDone();
    vector<aanvaller*> getBesteAanvallers();

    void setSpelers(vector<Speler *> players);

};


#endif //VOETBAL_TEAM_H
