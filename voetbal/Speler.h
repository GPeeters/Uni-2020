//
// Created by Gilles on 22/11/2019.
//

#ifndef VOETBAL_SPELER_H
#define VOETBAL_SPELER_H

#include <string>
#include <vector>

#include "Actie.h"

using namespace std;


class Speler {
private:
    string naam;
    vector<Actie *> acties;
    int afstandGelopen;
    int score;

public:
    Speler();
    Speler(string naam);
    virtual ~Speler();

    void addActie(Actie *act);
    vector<Actie *> getActies();
    void setActies(vector<Actie*> acties);
    void gelopen(int extraRunDist);
    int getDist();

    int getScore();

    const string &getNaam();

    void setScore(int score);

    void schrijf();
};


#endif //VOETBAL_SPELER_H
