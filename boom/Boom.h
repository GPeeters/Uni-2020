//
// Created by annemie on 9/19/19.
//

#ifndef BOOMC_BOOM_H
#define BOOMC_BOOM_H

#include "Sensor.h"

typedef struct Tknoop {
    Sensor* data;
    struct Tknoop *links;
    struct Tknoop *rechts;
    struct Tknoop *ouder;
} Knoop;

void plaatsInBoom(Knoop** wortel,char* naam);
void verwijderKnoopUitBoom(Knoop** wortel,char* naam);
void verwijderBoom(Knoop** wortel);
void schrijfBoomInorder(Knoop* wortel);
void voegWaardeToe(Knoop* wortel,char* naam,int waarde);

#endif //BOOMC_BOOM_H
