//
// Created by Gilles on 11/11/2019.
//

#ifndef UNTITLED1_WERKNEMER_H
#define UNTITLED1_WERKNEMER_H

using namespace std;

#include <string>
#include <iostream>


class Werknemer {
    private:
        string naam;
    public:
        Werknemer();
        Werknemer(string naam);
        Werknemer(Werknemer &wn);

        virtual ~Werknemer();

        string getNaam();
        void setNaam(string naam);
        friend ostream &operator<<(ostream &os, const Werknemer &werknemer);

};


#endif //UNTITLED1_WERKNEMER_H
