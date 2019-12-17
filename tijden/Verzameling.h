//
// Created by Gilles on 18/10/2019.
//

#ifndef TIJDEN_VERZAMELING_H
#define TIJDEN_VERZAMELING_H


#include "Afspraak.h"

class Verzameling{
private:
    Afspraak** afspraken; //array van pointers naar Afspraak-objecten
    int grootte;
    int aantal;
public:

    Verzameling();
    Verzameling(int gr);
    Verzameling(Afspraak *a);
    Verzameling (Verzameling && v);
    Verzameling(const Verzameling &v);
    virtual  ~Verzameling();

    Verzameling& operator=(Verzameling && v);
    Verzameling& operator= (const Verzameling& v);

    void add(Afspraak *afs);
    Afspraak **getAfspraken();
    void setAfspraken(Afspraak **afspraken);
    void setAantal(int aantal);
    int getGrootte();
    void setGrootte(int grootte);
    int getAantal();

    bool bevat(Afspraak *a) const;

    friend ostream& operator << (ostream& os, Verzameling& v);
    friend Verzameling operator + (const Verzameling &v1,const Verzameling &v2);
    friend Verzameling operator * (const Verzameling &v1, const Verzameling &v2);

};


#endif //TIJDEN_VERZAMELING_H
