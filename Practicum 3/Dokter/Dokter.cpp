//
// Created by Gilles on 8/11/2019.
//

#include "Dokter.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "Orthopedist.h"

Dokter& Dokter::operator=(const Dokter& other) {
    if(this!=&other){
        naam=other.naam;
    }
    return *this;
};

Dokter::Dokter() {
    //default geen argumenten
    cout << "default constructor dokter" << endl;
    cout << "naam: Def" << naam << endl;
};

Dokter::Dokter(string name){
    //normal constructor
    cout << "normal constructor dokter" << endl;
    Dokter::
    naam = name;
    cout << "naam: " << naam << endl;
};

Dokter::Dokter(Dokter &dokter){
    Dokter::
        naam = dokter.naam;
    cout << "copy constructor dokter" << endl;
    cout << "naam: " << naam << endl;
};


Dokter::~Dokter() {
    cout << "destructor dokter" << endl;
}

void Dokter::onderzoek(string Patient){
    cout << "onderzoek: " << Patient << endl;
};

void Dokter::schrijf(){
    cout << "naam: " << naam << endl;
};

string Dokter::getNaam(){
    cout << "naam: " << naam << endl;
    return naam;
};

void Dokter::raadpleeg(Dokter d){
    cout << "raadpleeg in Dokter, met Dokter parameter" << endl;
    d.schrijf();
}
void Dokter::raadpleeg(Dokter* d){
    cout << "raadpleeg in Dokter, met Dokter* parameter" << endl;
    d->schrijf();
}
void raadpleeg(Dokter d){
    cout << "raadpleeg in Orthopedist, met Dokter parameter" << endl;
    d.schrijf();
}
void raadpleeg(Dokter* d){
    cout << "raadpleeg in Orthopedist, met Dokter* parameter" << endl;
    d->schrijf();
}
void raadpleeg(Orthopedist o){
    cout << "raadpleeg in Orthopedist, met Orthopedist parameter" << endl;
    o.schrijf();
}
void raadpleeg(Orthopedist* o){
    cout << "raadpleeg in Orthopedist, met Orthopedist* parameter" << endl;
    o->schrijf();
}