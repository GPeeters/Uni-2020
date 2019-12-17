//
// Created by Gilles on 22/11/2019.
//

#ifndef VOETBAL_ACTIE_H
#define VOETBAL_ACTIE_H

#include <string>

using namespace std;

class Actie {
private:
    string naam;
    int score;

public:
    Actie();
    Actie(string naam);
    virtual ~Actie() = default;

    string getNaam();
    void setNaam(string naam);


};


#endif //VOETBAL_ACTIE_H
