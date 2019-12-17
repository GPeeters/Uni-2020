//
// Created by Gilles on 22/11/2019.
//
#include <iostream>
#include "Speler.h"
#include <stdio.h>

Speler::Speler() {
    Speler::naam="default";
            acties=vector<Actie *>();
}

Speler::~Speler() {
    vector <Actie*>::iterator it;
    for (it = acties.begin(); it!=acties.end(); it++){
        delete *it;
    }
}


Speler::Speler(string naam){
    Speler::naam=naam;
            score=0;
}

vector<Actie *> Speler::getActies(){
    return acties;
}

void Speler::setActies(vector<Actie*> acties) {
    Speler::acties = acties;
}


void Speler::addActie(Actie *act){
    acties.push_back(act);
}
void Speler::gelopen(int extraRunDist) {
    afstandGelopen+=extraRunDist;
}
int Speler::getDist(){
    return afstandGelopen;
}

int Speler::getScore() {
    return score;
}

void Speler::setScore(int score) {
    Speler::score = score;
}
void Speler::schrijf(){
    cout << getNaam() << endl;
}

const string &Speler::getNaam() {
    return naam;
}

