//
// Created by Gilles on 11/11/2019.
//

#ifndef UNTITLED1_COMPUTER_H
#define UNTITLED1_COMPUTER_H

#include <string>
#include <vector>

#include "moederbord.h"
#include "videokaart.h"
#include "harddisk.h"

using namespace std;

class Computer {
private:
    vector<string> onderdelen;

public:
    Computer();
    Computer(moederbord moth, videokaart vid, harddisk hard);
    Computer(Computer &comp);

    virtual ~Computer();

    void print();

};
#endif //UNTITLED1_COMPUTER_H
