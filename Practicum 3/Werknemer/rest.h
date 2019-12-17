//
// Created by Gilles on 11/11/2019.
//

#ifndef UNTITLED1_REST_H
#define UNTITLED1_REST_H

using namespace std;

#include <string>
#include <iostream>

#include "Manager.h"
#include "Directeur.h"

//aangezien met de vorige aparte klassen het concept wel duidelijk is heb ik voor de resterende klasses alles in éénzelfde header file gegoten


class Secretaresse: public Werknemer{
private:
    string burealokaal;
public:
    Secretaresse() {
        burealokaal="N/A";
    }

    Secretaresse(const string &naam, const string &burealokaal) : Werknemer(naam), burealokaal(burealokaal) {}

    virtual ~Secretaresse() {}

    friend ostream &operator<<(ostream &os, const Secretaresse &secretaresse) {
        os << static_cast<const Werknemer &>(secretaresse) << " burealokaal: " << secretaresse.burealokaal;
        return os;
    }

};

class Tijdelijk{
private:
    string naam;
    string departement;
    string stopdatum;

public:
    Tijdelijk(const string &naam, const string &departement, const string &stopdatum) : naam(naam), departement(departement), stopdatum(stopdatum) {}

    Tijdelijk() {}

    virtual ~Tijdelijk() {}

    const string &getStopdatum() const {
        return stopdatum;
    }

    friend ostream &operator<<(ostream &os, const Tijdelijk &tijdelijk) {
        os << "naam: " << tijdelijk.naam << " departement: " << tijdelijk.departement << " stopdatum: "
           << tijdelijk.stopdatum;
        return os;
    }
};

class Consultant: public Tijdelijk, public Manager{
    private:
        string bedrijf;
        string specialiteit;
    public:
        Consultant() {}

        Consultant(const string &naam, const string &departement, const string &stopdatum,
                   const string &groep, const string &bedrijf, const string &specialiteit)
                : Tijdelijk(naam, departement, stopdatum), Manager(naam, groep), bedrijf(bedrijf),
                  // bijvoorbeeld hier kan er een probleem optreden als de twee waardes voor naam verschillen
                  specialiteit(specialiteit) {}

        virtual ~Consultant() {

        }

        friend ostream &operator<<(ostream &os, const Consultant &consultant) {
            Manager m;
            m = consultant;
            os << static_cast<const Tijdelijk &>(consultant) << " groep: " << m.getGroep()
               << " bedrijf: " << consultant.bedrijf << " specialiteit: " << consultant.specialiteit;
            return os;
    }


};

class TSec: public Secretaresse, public Tijdelijk{
public:
    TSec() {}

    TSec(const string &naam, const string &departement, const string &burealokaal, const string &stopdatum):
    Secretaresse(naam,burealokaal), Tijdelijk(naam, departement, stopdatum) {}
    // opnieuw kans op problemen met 2 keer naam
    virtual ~TSec() {
    }

    friend ostream &operator<<(ostream &os, const TSec &sec) {
        Tijdelijk t=static_cast<const Tijdelijk &>(sec);
        os << static_cast<const Secretaresse &>(sec) << " stopdatum: " << t.getStopdatum();
        return os;
    }
};


#endif //UNTITLED1_REST_H
