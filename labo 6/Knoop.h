//
// Created by gilles on 10/12/2019.
//

#ifndef LABO_6_KNOOP_H
#define LABO_6_KNOOP_H

#include <iostream>
#include <memory>

using namespace std;

class Boom;

class Knoop {
    friend class Boom;
private:
    int data;
    shared_ptr <Knoop> links;
    shared_ptr <Knoop> rechts;
    weak_ptr <Knoop> ouder;
public:
    Knoop();
    Knoop(int getal);
    void voegToe(int getal);
    void inOrder();
};

#endif //LABO_6_KNOOP_H
