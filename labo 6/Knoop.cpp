//
// Created by gilles on 10/12/2019.
//

#include "Knoop.h"
Knoop::Knoop(int getal){
    Knoop::data = getal;
    links = nullptr;
    rechts = nullptr;
}
void Knoop::voegToe(int getal){
    if(getal==data){
        cout << "zit er al in. " << endl;
    }else if (getal<data){
        if(links==nullptr){
            links=make_shared<Knoop>(getal);
            cout  << getal << " ";
        }
        else{links->voegToe(getal);}
    }else{
        if(rechts==nullptr){
            rechts=make_shared<Knoop>(getal);
            cout << getal << " ";
        }
        else{rechts->voegToe(getal);}
    }
}

void Knoop::inOrder(){
    if(links!=nullptr){
        links->inOrder();
        cout << data << " ";
    }else if(rechts!=nullptr){
        rechts->inOrder();
    } else { cout << "Order Done" <<endl;}
}
