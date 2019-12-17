//
// Created by Gilles on 11/11/2019.
//

#include "Computer.h"
#include <string>
#include <iostream>
#include <vector>

#include "moederbord.h"
#include "videokaart.h"
#include "harddisk.h"

using namespace std;

Computer::Computer(){
    cout << "default constructor Computer" << endl;
    cout << "onderdelen: " << onderdelen.front() << " " << onderdelen.at(1) << " " << onderdelen.back() << endl;
};
Computer::Computer(moederbord motb,videokaart vid, harddisk hard){
    cout << "normal constructor Computer" << endl;
    vector<string> temp;
    temp[0] = motb.getNaam();
    temp[1] = vid.getNaam();
    temp[2] = hard.getNaam();

    Computer::
    onderdelen = temp;

    cout << "onderdelen: " << onderdelen.front() << " " << onderdelen.at(1) << " " << onderdelen.back() << endl;
};
Computer::Computer(Computer &Comp){
    cout << "copy constructor Computer" << endl;

    Computer::
    onderdelen = Comp.onderdelen;

    cout << "onderdelen: " << onderdelen.front() << " " << onderdelen.at(1) << " " << onderdelen.back() << endl;
}

Computer::~Computer() {

};

void Computer::print(){
    vector<string>::iterator itr;
    for (itr = onderdelen.begin();itr!=onderdelen.end();itr++){
    cout << *itr << endl;
    }
};