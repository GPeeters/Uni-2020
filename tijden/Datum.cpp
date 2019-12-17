//
// Created by Gilles on 14/10/2019.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "Datum.h"
using namespace std;

Datum:: Datum(){ //default constructor
    //default constructor, geen argumenten
}

Datum:: Datum(int dag, int maand, int jaar){
    //normale constructor, met 3 argumenten, met print

   Datum ::
    d = dag;
    m = maand;
    j = jaar;
    //cout << "Datum:" << d << "/" << m << "/" << j <<endl;
}
Datum:: Datum(const Datum &copyDat){
    //copy-constructor, gebaseerd op meegegeven pointer, met print

    /* Initial memory allocation */
    Datum::
    d = copyDat.d;
    m = copyDat.m;
    j = copyDat.j;

    //cout << "Datum:" << d << "/" << m << "/" << j <<endl;


}
void Datum:: destructor(Datum* toDel){
    //met print
    cout << "To be deleted:" << (const int *) toDel;
    free(toDel);
    cout << "Destruct succesful" <<endl;
}

ostream &operator <<(ostream &os, Datum &dat){
    return os << dat.getDag() <<"/" << dat.getMaand() << "/" << dat.getJaar() << endl;
}

void Datum:: setDag(int dag){
    d = dag;
}
void Datum:: setMaand(int maand){
    m = maand;
}
void Datum:: setJaar(int jaar){
    j = jaar;
}
int Datum:: getDag(){
    return d;
}
int Datum:: getMaand(){
    return m;
}
int Datum:: getJaar(){
    return j;
}
void Datum:: schrijfNL(){
    // d/m/j
    cout << "Datum:" << d << "/" << m << "/" << j <<endl;

}
void Datum:: schrijfE(){
    // m/d/j
    cout << "Date:" << m << "/" << d << "/" << j <<endl;
}

bool Datum::isGelijk(Datum dat){
    bool ret = false;
    if(dat.getDag() == d && dat.getMaand() == m && dat.getJaar() == j){
        ret = true;
    }
 return ret;
}




