//
// Created by gilles on 10/12/2019.
//

#ifndef LABO_6_BOOM_H
#define LABO_6_BOOM_H

#include "Knoop.h"
#include <iostream>
#include <memory>

using namespace std;

class Boom{
private:
    shared_ptr<Knoop> wortel;
public:
    Boom();
    void voegToe(int getal);
    void verwijder(int getal);
    void schrijfInOrder();
    void inOrder(shared_ptr<Knoop> temp);

    shared_ptr<Knoop> getWortel();

};
#endif //LABO_6_BOOM_H
