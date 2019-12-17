//
// Created by Gilles on 22/11/2019.
//

#include "middenvelder.h"

middenvelder::middenvelder(){
    this->aantalGoedePasses = 0;
    this->aantalSlechtePasses = 0;
}

middenvelder::middenvelder(string naam):Speler(naam){
    this->aantalGoedePasses = 0;
    this->aantalSlechtePasses = 0;
}

void middenvelder::addActie(Actie *act){
    if (PasActie* passptr = dynamic_cast<PasActie*>(act)){
        if(passptr->getSucces()==1){
            aantalGoedePasses++;
            this->setScore(this->getScore()+1);
        } else {
            aantalSlechtePasses++;
            while(this->getScore()>0){this->setScore(this->getScore()-1);}
        }
    }
    if (loop* loopptr = dynamic_cast<loop*>(act)){
        Speler::gelopen(loopptr->getDist());
    }
}

