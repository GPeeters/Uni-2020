//
// Created by Gilles on 11/11/2019.
//

#include "videokaart.h"
#include <iostream>

videokaart::videokaart(){
    cout << "default constructor videokaart" << endl;
    cout << "naam: Def" << naam << endl;
};
videokaart::videokaart(string name){
    cout << "normal constructor videokaart" << endl;
    videokaart::
    naam = name;
    cout << "naam: " << naam << endl;
};
videokaart::videokaart(videokaart &Vid){
    cout << "copy constructor videokaart" << endl;
    videokaart::naam = Vid.naam;
    cout << "naam: " << naam << endl;
}

videokaart::~videokaart() {

};

string videokaart::getNaam(){
    cout << "naam: " << naam << endl;
    return naam;
}

void videokaart::setNaam(string naam) {
    videokaart::naam = naam;
};