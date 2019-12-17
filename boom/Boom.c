//
// Created by Gilles on 4/10/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "Sensor.h"
#include "Boom.h"

void plaatsInBoom(Knoop** wortel,char* naam){
    if((**wortel).ouder == NULL){
        Sensor* sens = maakSensor(naam);
        (**wortel).links = NULL;
        (**wortel).rechts = NULL;
    }
}
void verwijderKnoopUitBoom(Knoop** wortel,char* naam){

}
void verwijderBoom(Knoop** wortel){

}
void schrijfBoomInorder(Knoop* wortel){

}
void voegWaardeToe(Knoop* wortel,char* naam,int waarde){
    voegSensorWaardeToe((*wortel).Sensor, )
}
