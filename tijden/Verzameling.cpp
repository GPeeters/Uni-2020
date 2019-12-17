//
// Created by Gilles on 18/10/2019.
//

#include "Verzameling.h"

Verzameling::Verzameling(){
    grootte = 15;
    aantal = 0;
    afspraken = new Afspraak*[grootte];
}

Verzameling::Verzameling(int gr){
    grootte = gr;
    aantal = 0;
    afspraken = new Afspraak*[grootte];
}

Verzameling ::Verzameling(Afspraak *a) {
    grootte = 10;
    aantal = 1;
    afspraken = new Afspraak*[grootte];
    afspraken[0] = a;
}

Verzameling::Verzameling(Verzameling &&v) { //mov constructor
    //resources overnemen
    grootte = v.grootte;
    aantal = v.aantal;
    afspraken = v.afspraken; // verwijzen naar dezelfde array
    //resources parameter -> 0
    v.grootte = 0;
    v.aantal = 0;
    v.afspraken = nullptr;
}

Verzameling::~Verzameling() {
    //opm: als kopie afspraak werken met for(int i=0;i<aantal;i++) delete afspraken[i]:
    if(afspraken != nullptr){
        delete[] afspraken;
    }
//eerst u destructor en delete schrijven
}

Verzameling& Verzameling::operator=(Verzameling &&v) {
    //resources stelen
    grootte = v.grootte;
    aantal = v.aantal;
    afspraken = v.afspraken; // verwijzen naar zelfde array
    //resources parameter -> 0
    v.grootte = 0;
    v.aantal = 0;
    v.afspraken = nullptr;
    return *this;
}

// TODO als je dynamisch geheugen hebt altijd COPY CONSTRUCTUR en ASSIGNMENT CONSTUCTUR schrijven
Verzameling::Verzameling(const Verzameling &v): grootte(v.grootte), aantal(v.aantal) {
    for (int i = 0; i < aantal; ++i) {
        afspraken[i] = v.afspraken[i];
    } //indien je bij add new schrijft, moet je hier ook new schrijven enz
}

//assigment operator
Verzameling& Verzameling ::operator=(const Verzameling &v) {
    if(this != &v){
        if(afspraken != nullptr){delete[] afspraken;}
        aantal = v.aantal;
        grootte = v.grootte;
        afspraken = new Afspraak*[grootte];
        for (int i = 0; i < aantal; ++i) {
            afspraken[i] = v.afspraken[i];
        }
        return *this;
    }
}

int Verzameling::getAantal(){
    return aantal;
}

void Verzameling::setAantal(int aantal){
    Verzameling::aantal = aantal;
}

Afspraak **Verzameling::getAfspraken(){
    return afspraken;
}

int Verzameling::getGrootte(){
    return grootte;
}

void Verzameling::setGrootte(int grootte){
    Verzameling::grootte = grootte;
}

void Verzameling::setAfspraken(Afspraak **afspraken){
    Verzameling::afspraken = afspraken;
}


void Verzameling::add(Afspraak *afs){
    if(&afs != nullptr){

        if(aantal > grootte){
            Afspraak** temp = new Afspraak*[grootte + 10];
            grootte = grootte + 10;
            for (int i = 0; i < aantal; ++i){
                temp[i] = afspraken[i];
            }
            delete [] afspraken;
            afspraken = temp;
        }
        afspraken[aantal] = afs;
        aantal++;
    }
}


ostream &operator <<(ostream &os, Verzameling &v) {
    for (int i = 0; i < v.getAantal(); ++i) {
        Afspraak *af = v.afspraken[i];
        if (v.afspraken[i] != nullptr) {
            os << *af;
        }
    }
    return os;
}


Verzameling operator * (const Verzameling &v1, const Verzameling &v2){
    Verzameling res(20);
    for (int i = 0; i < v1.aantal; ++i) {
        if (v2.bevat(v1.afspraken[i])){
            res.add(v1.afspraken[i]);
        }
    }
    return res;
}

Verzameling operator + (const Verzameling  &v1, const Verzameling &v2){
    Verzameling res ( v1);
    for (int i = 0; i < v2.aantal; ++i) {
        res.add(v2.afspraken[i]);
    }
    return res;
}

bool Verzameling ::bevat(Afspraak *a) const {
    bool uniek;
    int i = 0;
    // geen for in combinatie met een break!
    while(i < aantal && uniek){
        uniek = (Afspraak*)(afspraken[i])->isGelijk(*a);
        i++;
    }
    return !uniek;
}