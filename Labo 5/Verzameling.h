//
// Created by Gilles on 18/10/2019.
//

#ifndef TIJDEN_VERZAMELING_H
#define TIJDEN_VERZAMELING_H

#include "Afspraak.h"

template<class T> class Verzameling{
private:
    Afspraak** afspraken; //array van pointers naar Afspraak-objecten
    int grootte;
    int aantal;
public:

    Verzameling();
    Verzameling(int gr);
    Verzameling(Afspraak *a);
    Verzameling (Verzameling<T> && v);
    Verzameling(const Verzameling<T> &v);
    virtual  ~Verzameling();

    Verzameling& operator= (Verzameling<T> && v);
    Verzameling& operator= (const Verzameling<T>& v);

    void add(Afspraak *afs);
    Afspraak **getAfspraken();
    void setAfspraken(Afspraak **afspraken);
    void setAantal(int aantal);
    int getGrootte();
    void setGrootte(int grootte);
    int getAantal();

    bool bevat(T *afspraak) const;

    template<class R> friend ostream& operator << (ostream& os, Verzameling<R> &v);
    template<class R> friend Verzameling<R> operator + (const Verzameling<R> &v1,const Verzameling<R> &v2);
    template<class R> friend Verzameling<R> operator * (const Verzameling<R> &v1, const Verzameling<R> &v2);






};

template<class T> Verzameling<T>::Verzameling(){
    grootte = 15;
    aantal = 0;
    afspraken = new Afspraak*[grootte];
}

template<class T> Verzameling<T>::Verzameling(int gr){
    grootte = gr;
    aantal = 0;
    afspraken = new Afspraak*[grootte];
}

template<class T> Verzameling<T> ::Verzameling(Afspraak *a) {
    grootte = 10;
    aantal = 1;
    afspraken = new Afspraak*[grootte];
    afspraken[0] = a;
}

template<class T> Verzameling<T>::Verzameling(Verzameling<T> &&v) { //mov constructor
    //resources overnemen
    grootte = v.grootte;
    aantal = v.aantal;
    afspraken = v.afspraken; // verwijzen naar dezelfde array
    //resources parameter -> 0
    v.grootte = 0;
    v.aantal = 0;
    v.afspraken = nullptr;
}

template<class T> Verzameling<T>::~Verzameling() {
    //opm: als kopie afspraak werken met for(int i=0;i<aantal;i++) delete afspraken[i]:
    if(afspraken != nullptr){
        delete[] afspraken;
    }
//eerst u destructor en delete schrijven
}

template<class T> Verzameling<T>& Verzameling<T>::operator=(Verzameling<T> &&v) {
    //resources stelen
    grootte = v.grootte;
    aantal = v.aantal;
    afspraken = v.afspraken; // verwijzen naar zelfde array
    //resources parameter -> 0
    v.grootte = 0;
    v.aantal = 0;
    v.afspraken = nullptr;
    return *this;
}

// TODO als je dynamisch geheugen hebt altijd COPY CONSTRUCTUR en ASSIGNMENT CONSTUCTUR schrijven
template<class T> Verzameling<T>::Verzameling(const Verzameling<T> &v): grootte(v.grootte), aantal(v.aantal) {
    for (int i = 0; i < aantal; ++i) {
        afspraken[i] = v.afspraken[i];
    } //indien je bij add new schrijft, moet je hier ook new schrijven enz
}

//assigment operator
template<class T> Verzameling<T>& Verzameling<T> ::operator=(const Verzameling<T> &v) {
    if(this != &v){
        if(afspraken != nullptr){delete[] afspraken;}
        aantal = v.aantal;
        grootte = v.grootte;
        afspraken = new Afspraak*[grootte];
        for (int i = 0; i < aantal; ++i) {
            afspraken[i] = v.afspraken[i];
        }
        return *this;
    }
}

template<class T> int Verzameling<T>::getAantal(){
    return aantal;
}

template<class T> void Verzameling<T>::setAantal(int aantal){
    Verzameling::aantal = aantal;
}

template<class T> Afspraak **Verzameling<T>::getAfspraken(){
    return afspraken;
}

template<class T> int Verzameling<T>::getGrootte(){
    return grootte;
}

template<class T> void Verzameling<T>::setGrootte(int grootte){
    Verzameling<T>::grootte = grootte;
}

template<class T> void Verzameling<T>::setAfspraken(Afspraak **afspraken){
    Verzameling::afspraken = afspraken;
}


template<class T> void Verzameling<T>::add(Afspraak *afs){
    if(&afs != nullptr){

        if(aantal > grootte){
            Afspraak** temp = new Afspraak*[grootte + 10];
            grootte = grootte + 10;
            for (int i = 0; i < aantal; ++i){
                temp[i] = afspraken[i];
            }
            delete [] afspraken;
            afspraken = temp;
        }
        afspraken[aantal] = afs;
        aantal++;
    }
}


template <class R>  ostream &operator << (ostream &os, Verzameling<R> &v) {
    for (int i = 0; i < v.getAantal(); ++i) {
        Afspraak *af = v.afspraken[i];
        if (v.afspraken[i] != nullptr) {
            os << *af;
        }
    }
    return os;
}


template<class T> Verzameling<T> operator+(const Verzameling<T>& v1, const Verzameling<T>& v2){
    Verzameling<T> res(v1);
    for(int i = 0;i<v2.aantal;i++){
        res.add(v2.afspraken[i]);
    }
    return res;
}
template<class T> Verzameling<T> operator*(const Verzameling<T>& v1, const Verzameling<T>& v2){
    Verzameling<T> res;
    for(int i = 0; i<v1.aantal;i++){
        if(v2.bevat(v1.afspraken[i])) res.add(v1.afspraken[i]);
    }
    return res;
}

/*template<class T> bool Verzameling<T> ::bevat(Afspraak *a) const {
    bool uniek=true;
    int i = 0;
    // geen for in combinatie met een break!
    while((i < aantal) && (uniek)){
        uniek = (Afspraak*)(afspraken[i])->isGelijk(*a);
        i++;
    }
    return !uniek;
}*/

template<class T> bool Verzameling<T>::bevat(T *afspraak) const{
    int i = 0;
    bool uniek = true;
    while((i<aantal)&&(uniek)){
        if(afspraak!=afspraken[i]){
            uniek=true;
        }
        i++;
    }
    return !uniek;
}

#endif //TIJDEN_VERZAMELING_H
