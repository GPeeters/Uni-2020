//
// Created by gille on 6/12/2019.
//

#ifndef LABO_5_TPREDICATE_H
#define LABO_5_TPREDICATE_H
#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
template <class T> class TPredicate {
    T waarde;
public :
    TPredicate(T w){ waarde = w;}
    bool operator()(T w){if(w==waarde) return true; else return false;


#endif //LABO_5_TPREDICATE_H
