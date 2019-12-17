//
// Created by Gilles on 22/11/2019.
//

#include "team.h"
#include <bits/stdc++.h>

using namespace std;

team::team(vector<Speler *> players) : spelers(players) {}

team::~team() {
}

void team::addPlayer(Speler * player){
    spelers.push_back(player);
}

void team::setSpelers(vector<Speler *> players) {
    team::spelers = spelers;
}

bool sorteer(Speler *s1, Speler *s2){
    return (s1->getScore()>s2->getScore());
}
void team::gameDone(){
    vector<Speler *> spelers;
    vector<Speler *>::iterator itr;
    //aanmaken lijsten voor de verschillende type spelers weer te geven +hun iterators
    vector<Keeper*>keepers;
    vector<verdediger*>verdedigers;
    vector <verdediger*>::iterator itr2;
    vector<middenvelder*>middenvelders;
    vector <middenvelder*>::iterator itr3;
    vector<aanvaller*>aanvallers;
    vector <aanvaller*>::iterator itr4;

    //de volledige lijst met spelers sorteren op aantal punten
    sort (spelers.begin(),spelers.end(),sorteer);

    //de spelers in de juiste lijsten steken
    for (itr=spelers.begin();itr!=spelers.end();itr++){
        if (Keeper * keeperptr = dynamic_cast<Keeper*>((*itr))){
            keepers.push_back(keeperptr);
        }
        if (verdediger * verdedigerptr=dynamic_cast<verdediger*>((*itr))){
            verdedigers.push_back(verdedigerptr);
        }
        if (middenvelder * middenveldersptr=dynamic_cast<middenvelder*>((*itr))){
            middenvelders.push_back(middenveldersptr);
        }
        if (aanvaller * aanvallerptr=dynamic_cast<aanvaller*>((*itr))){
            aanvallers.push_back(aanvallerptr);
        }
    }
    //de selectie voor de volgende topper printen
    cout<<"De beste selectie voor volgende wedstrijd is: "<< endl;
    cout<<"Als keeper: "<<endl;
    string print=keepers[0]->getNaam();
    cout<<  print <<endl;
    cout<< "Als verdedigers: "<<endl;
    for(itr2=verdedigers.begin();itr2!=verdedigers.begin()+4;itr2++){
        (*itr2)->schrijf();
    }
    cout<< "Als middenvelders: "<<endl;
    for(itr3=middenvelders.begin();itr3!=middenvelders.begin()+3;itr3++){
        (*itr3)->schrijf();
    }
    cout<< "Als aanvallers: "<<endl;
    for(itr4=aanvallers.begin();itr4!=aanvallers.begin()+3;itr4++){
        (*itr4)->schrijf();
    }

    //verwijderen van pointers
    for (itr=spelers.begin();itr!=spelers.end();itr++){
        delete *itr;
    }


}



