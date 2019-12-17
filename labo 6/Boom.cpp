//
// Created by gilles on 10/12/2019.
//

#include "Boom.h"


Boom::Boom(){
    Boom::wortel=nullptr;
}

void Boom::voegToe(int getal){
    if(wortel==nullptr){
        wortel=make_shared<Knoop>(getal);
        cout << "Wortel is " << getal << endl;
    }
    else {
        wortel->voegToe(getal);
    }
}

void Boom::verwijder(int getal){
    if( getal==wortel->data){
        cout << "wortel kan niet worden verwijderd" <<endl;
    } else if (getal<(wortel->links)->data){

    }


}

void Boom::schrijfInOrder(){
    if(wortel!=nullptr){
        wortel->inOrder();
    }
    cout << "Done" << endl;
}

shared_ptr<Knoop> Boom::getWortel(){
    return wortel;
}

