//
// Created by Gilles on 8/11/2019.
//

#ifndef UNTITLED1_ORTHOPEDIST_H
#define UNTITLED1_ORTHOPEDIST_H

#include <string>
#include <cstdio>
#include <cstdlib>
#include <iostream>

#include "Dokter.h"

using namespace std;

class Orthopedist : public Dokter {
private:


    string specialiteit;

public:
    Orthopedist& operator=(const Orthopedist& other);
    Orthopedist();
    Orthopedist(string specialty);
    Orthopedist(string name, string spec);
    Orthopedist(Orthopedist &ortho);

    virtual ~Orthopedist();

    void opereer(string Patient);
    void schrijf();

};


#endif //UNTITLED1_ORTHOPEDIST_H
