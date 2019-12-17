//
// Created by Gilles on 11/11/2019.
//

#include "moederbord.h"
#include <iostream>

moederbord::moederbord(){
    cout << "default constructor moederbord" << endl;
    cout << "naam: Def" << naam << endl;
};
moederbord::moederbord(string name){
    cout << "normal constructor moederbord" << endl;
    moederbord::
    naam = name;
    cout << "naam: " << naam << endl;
};
moederbord::moederbord(moederbord &Mother){
    cout << "copy constructor moederbord" << endl;
    moederbord::naam = Mother.naam;
    cout << "naam: " << naam << endl;
}

moederbord::~moederbord() {

}

string moederbord::getNaam(){
    cout << "naam: " << naam << endl;
    return naam;
}

void moederbord::setNaam(string naam) {
    moederbord::naam = naam;
};