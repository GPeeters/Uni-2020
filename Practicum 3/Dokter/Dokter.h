//
// Created by Gilles on 8/11/2019.
//

#ifndef UNTITLED1_DOKTER_H
#define UNTITLED1_DOKTER_H

#include <string>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

class Dokter {
private:
    string naam;

public:
    Dokter& operator=(const Dokter& other);
    Dokter();
    Dokter(string name);
    Dokter(Dokter &dokter);

    virtual ~Dokter();

    void onderzoek(string Patient);
    void schrijf();
    string getNaam();

    void raadpleeg(Dokter d);

    void raadpleeg(Dokter *d);
};


#endif //UNTITLED1_DOKTER_H
