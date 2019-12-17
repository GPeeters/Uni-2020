//
// Created by Gilles on 22/11/2019.
//

#include "verdediger.h"
#include "loop.h"
#include "OnderschepActie.h"

/*void verdediger::balOnderschept(){
    addActie(OnderschepActie(1));
    aantalBallenOnderschept++;
}
void verdediger::afstandGelopen(int afstand){
    addActie(loop(afstand));
    verdediger::runDist=runDist+afstand;
}*/
void verdediger::addActie(Actie *act){
    if (OnderschepActie* blockptr = dynamic_cast<OnderschepActie*>(act)){
        if(blockptr->getSucces()==1){
            aantalBallenOnderschept++;
            this->setScore(this->getScore()+1);
        }
    }
    if (loop* loopptr = dynamic_cast<loop*>(act)){
        Speler::gelopen(loopptr->getDist());
    }
}

verdediger::verdediger(){
    this->aantalBallenOnderschept = 0;
}
verdediger::verdediger(string naam):Speler(naam){
    this->aantalBallenOnderschept = 0;
}
