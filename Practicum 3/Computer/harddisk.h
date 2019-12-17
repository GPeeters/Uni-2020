//
// Created by Gilles on 11/11/2019.
//

#ifndef UNTITLED1_HARDDISK_H
#define UNTITLED1_HARDDISK_H

#include <string>

using namespace std;

class harddisk {
private:
    string naam;
    int opslag; //capaciteit in Gigabyte

public:
    harddisk();
    harddisk(string name, int cap);
    harddisk(harddisk &Hard);

    string getNaam();

    void setNaam(string naam);

    virtual ~harddisk();
};


#endif //UNTITLED1_HARDDISK_H
