//
// Created by Gilles on 11/11/2019.
//

#ifndef UNTITLED1_MANAGER_H
#define UNTITLED1_MANAGER_H


#include "Werknemer.h"

class Manager: public Werknemer{

private:
    string groep;

public:

    virtual ~Manager();

    Manager();

    Manager(string naam, string groep);

    string getGroep();

    void setGroep(string groep);

    friend ostream &operator<<(ostream &os, const Manager &manager);

};


#endif //UNTITLED1_MANAGER_H
