//
// Created by Gilles on 22/11/2019.
//

#include "Keeper.h"


/*void Keeper::balGestopt(){
    addActie(SaveActie());
    aantalSaves++;
}

void Keeper::balGemist(){
    addActie(SaveActie(false));
    aantalTegengoals++;
}*/

void Keeper::addActie(Actie *act){
    if (SaveActie* saveptr = dynamic_cast<SaveActie*>(act)){
        if(saveptr->getSucces()==1){
            aantalSaves++;
            this->setScore(this->getScore()+1);
        } else {
            aantalTegengoals;
            while(this->getScore()>0){this->setScore(this->getScore()-1);}
        }
    }
}

Keeper::Keeper(string naam): Speler(naam){
    this->aantalSaves=0;
    this->aantalTegengoals=0;
}

Keeper::~Keeper() {

}

int Keeper::getAantalSaves(){
    return aantalSaves;
}

int Keeper::getAantalTegengoals(){
    return aantalTegengoals;
}
