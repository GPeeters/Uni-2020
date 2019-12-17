//
// Created by Gilles on 11/11/2019.
//

#ifndef UNTITLED1_VIDEOKAART_H
#define UNTITLED1_VIDEOKAART_H

#include <string>


using namespace std;

class videokaart {
private:
    string naam;

public:
    videokaart();
    videokaart(string name);
    videokaart(videokaart &Vid);

    string getNaam();

    void setNaam(string naam);

    virtual ~videokaart();
};


#endif //UNTITLED1_VIDEOKAART_H
