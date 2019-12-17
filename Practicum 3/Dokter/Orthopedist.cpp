//
// Created by Gilles on 8/11/2019.
//
#include <string>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "Orthopedist.h"
#include "Dokter.h"


using namespace std;

Orthopedist& Orthopedist::operator=(const Orthopedist& other) {
    if(this!=&other){
        Dokter::operator=(other);
        specialiteit=other.specialiteit;
    }
    return *this;
};

Orthopedist::Orthopedist() {
    cout << "default constructor orthopedist" << endl;
    cout << "naam: " << getNaam() << "specialiteit: " << specialiteit << endl;
};
Orthopedist::Orthopedist(string specialty){
    cout << "normal constructor orthopedist" << endl;
    Orthopedist::
    specialiteit = specialty;
    cout << "naam: " << getNaam() << "specialiteit: " << specialiteit << endl;
};
Orthopedist::Orthopedist(string name, string spec) : Dokter(name){

   Orthopedist::
   specialiteit = spec;
    cout << "naam: " << getNaam() << "specialiteit: " << specialiteit << endl;
};

Orthopedist::Orthopedist(Orthopedist &ortho) : Dokter(ortho){
    Orthopedist::
    specialiteit = ortho.specialiteit;
    cout << "copy constructor orthopedist" << endl;
    cout << "naam: " << getNaam() << "specialiteit: " << specialiteit << endl;
};

Orthopedist::~Orthopedist() {
    cout << "destructor orthopedist" << endl;
};

void Orthopedist::opereer(string Patient){
    cout << "opereer: " << Patient << endl;
};
void Orthopedist::schrijf(){
    cout << "naam: " << getNaam() << "specialiteit: " << specialiteit << endl;
};
