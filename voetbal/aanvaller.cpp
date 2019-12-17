//
// Created by Gilles on 22/11/2019.
//

#include "aanvaller.h"
#include "loop.h"
#include "doelpoging.h"

aanvaller::aanvaller(){
    this->aantalDoelpunten = 0;
    this->aantalSchotenOpDoel = 0;
}
aanvaller::aanvaller(string naam):Speler(naam){
    this->aantalDoelpunten = 0;
    this->aantalSchotenOpDoel = 0;
}

int aanvaller::getAantalDoelpunten() {
    return aantalDoelpunten;
}

int aanvaller::getAantalSchotenOpDoel() {
    return aantalSchotenOpDoel;
}

aanvaller::~aanvaller() {

}
void aanvaller::addActie(Actie *act){
    if (loop* loopptr = dynamic_cast<loop*>(act)){
        Speler::gelopen(loopptr->getDist());
    }
    if (doelpoging* doelpogingptr = dynamic_cast<doelpoging*>(act)){
        if(doelpogingptr->getSucces()==1){
            aantalDoelpunten++;
            this->setScore(this->getScore()+1);
        }
        aantalSchotenOpDoel++;
        this->setScore(this->getScore()+1);
    }
}
