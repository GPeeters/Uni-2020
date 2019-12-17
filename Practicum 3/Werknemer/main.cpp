//
// Created by Gilles on 11/11/2019.
//
#include "rest.h"

int main() {

    Werknemer w1("Finn");
    Manager m1("Nele","Unicorn Project");
    Directeur d1("Jonas","Project Iron Man","admin");

    Secretaresse s1("Lore","A113");

    Consultant c1("Vinny","Productie","10/12/2017","Unicorn Project","Deloitte","Fotonica");
    TSec ts1("Moeke","R&D","R2D2","13/12/2017");

    cout<<w1<<endl;
    cout<<m1<<endl;
    cout<<d1<<endl;
    cout<<s1<<endl;
    cout<<c1<<endl;
    cout<<ts1<<endl;

    return 0;
}
