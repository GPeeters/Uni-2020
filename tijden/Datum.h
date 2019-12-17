//
// Created by Gilles on 14/10/2019.
//

#ifndef TIJDEN_DATUM_H
#define TIJDEN_DATUM_H
using namespace std;
/*typedef struct Tdatum {
    int d; //d staat voor getalwaarde van de dag
    int m; //m staat voor getalwaarde van de maand
    int j; //j staat voor het jaartal
} Datum;*/

class Datum{
private:
    int d; //d staat voor getalwaarde van de dag
    int m; //m staat voor getalwaarde van de maand
    int j; //j staat voor het jaartal


public:
    Datum(); //default constructor, geen argumenten, met print
    Datum(int dag, int maand, int jaar); //normale constructor, met 3 argumenten, met print
    Datum(const Datum &copyDat); //copy-constructor, gebaseerd op meegegeven pointer, met print
    void destructor(Datum* toDel); //met print
    friend ostream& operator << (ostream& os, Datum& dat);
    void setDag(int dag);
    void setMaand(int maand);
    void setJaar(int jaar);
    int getDag();
    int getMaand();
    int getJaar();
    void schrijfNL(); // d/m/j
    void schrijfE(); // m/d/j

    bool isGelijk(Datum dat);

};
#endif //TIJDEN_DATUM_H
