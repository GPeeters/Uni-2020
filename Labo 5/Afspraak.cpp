//
// Created by Gilles on 14/10/2019.
//
#include<iostream>
using namespace std;
#include "Afspraak.h"
#include "Datum.h"
#include "Verzameling.h"


Afspraak::Afspraak(){ //default constructor
}
Afspraak::Afspraak(int dag, int maand, int jaar, string place){
    datum = Datum(dag, maand, jaar);
    plaats = place;
}
Afspraak::Afspraak(Datum date, string place){ //normal constructor
    datum = date;
    plaats = place;

}
Afspraak::Afspraak(Afspraak &af){ //copy constructor
    plaats = af.plaats;
    datum = af.datum;
}
Afspraak::~Afspraak(){
}

ostream &operator <<(ostream &os, Afspraak &af) {
    Datum datum = af.getDat();
    int dag = datum.getDag();
    int maand = datum.getMaand();
    int jaar = datum.getJaar();
    string plaats = af.getPlaats();
    return os << "datum: " << dag << "/" << maand << "/" << jaar << " plaats: "<< plaats <<endl;
}

void Afspraak::setDat(Datum d){
    datum = d;
}
void Afspraak::setPlaats(string pl){
    plaats = pl;
}
Datum Afspraak::getDat(){
    return datum;
}
string Afspraak::getPlaats(){
    return plaats;
}
void Afspraak::schrijfNL(){
    cout << "datum: ";
    datum.schrijfNL();
    cout <<"plaats:" << plaats <<endl;
}
void Afspraak::schrijfE(){
    cout << "datum:";
    datum.schrijfE();
    cout << "plaats:"<< plaats <<endl;
}

bool Afspraak::isGelijk(Afspraak af){
    bool ret = false;
           if(datum.isGelijk(af.getDat()) && plaats == af.getPlaats()){
               ret = true;
           };
    return ret;
}

