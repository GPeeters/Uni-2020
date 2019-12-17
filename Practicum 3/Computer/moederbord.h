//
// Created by Gilles on 11/11/2019.
//

#ifndef UNTITLED1_MOEDERBORD_H
#define UNTITLED1_MOEDERBORD_H

#include <string>

using namespace std;

class moederbord {
private:
    string naam;

public:
    moederbord();
    moederbord(string name);
    moederbord(moederbord &Mother);

    string getNaam();

    void setNaam(string naam);

    virtual ~moederbord();
};


#endif //UNTITLED1_MOEDERBORD_H
