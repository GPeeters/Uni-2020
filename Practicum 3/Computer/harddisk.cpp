//
// Created by Gilles on 11/11/2019.
//

#include "harddisk.h"
#include <string>
#include <iostream>

using namespace std;

harddisk::harddisk(){
    cout << "default constructor harddisk" << endl;
    cout << "naam: Def" << naam << endl;
};
harddisk::harddisk(string name, int cap){
    cout << "normal constructor harddisk" << endl;
    harddisk::
    naam = name;
    opslag=cap;
    cout << "naam: " << naam << "Opslagcapaciteit: " << opslag << endl;
};
harddisk::harddisk(harddisk &Hard){
    cout << "copy constructor harddisk" << endl;
    harddisk::naam = Hard.naam;
    cout << "naam: " << naam << endl;
}

harddisk::~harddisk() {

};

string harddisk::getNaam(){
    cout << "naam: " << naam << endl;
    return naam;
}

void harddisk::setNaam(string naam) {
    harddisk::naam = naam;
};